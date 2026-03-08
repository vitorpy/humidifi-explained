// ExportDecompiled.java — Ghidra headless script to decompile all functions to C pseudocode
// Usage: run via analyzeHeadless -postScript ExportDecompiled.java
//
// Output: humidifi_decompiled.c in the same directory as the binary being analyzed

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;

import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.Iterator;

public class ExportDecompiled extends GhidraScript {

    @Override
    public void run() throws Exception {
        String outputPath = System.getProperty("decompile.output",
                "/home/vitorpy/src/humidfi-explained/humidifi_decompiled.c");

        println("ExportDecompiled: writing to " + outputPath);

        DecompInterface decompiler = new DecompInterface();
        DecompileOptions options = new DecompileOptions();
        decompiler.setOptions(options);
        decompiler.openProgram(currentProgram);

        FunctionManager funcManager = currentProgram.getFunctionManager();
        Iterator<Function> functions = funcManager.getFunctions(true);

        int count = 0;
        int errors = 0;

        try (PrintWriter out = new PrintWriter(new FileWriter(new File(outputPath)))) {
            out.println("/* Decompiled from: " + currentProgram.getName() + " */");
            out.println("/* Language: " + currentProgram.getLanguageID() + " */");
            out.println("/* Functions: " + funcManager.getFunctionCount() + " */");
            out.println();

            while (functions.hasNext()) {
                Function func = functions.next();
                if (monitor.isCancelled()) break;

                String name = func.getName();
                long addr = func.getEntryPoint().getOffset();
                monitor.setMessage("Decompiling " + name);

                DecompileResults result = decompiler.decompileFunction(func, 60, monitor);

                if (result != null && result.decompileCompleted()) {
                    String c = result.getDecompiledFunction().getC();
                    out.println("/* ---- " + name + " @ 0x" + Long.toHexString(addr) + " ---- */");
                    out.println(c);
                    count++;
                } else {
                    String errMsg = (result != null) ? result.getErrorMessage() : "null result";
                    out.println("/* ---- " + name + " @ 0x" + Long.toHexString(addr)
                            + " DECOMPILE ERROR: " + errMsg + " ---- */");
                    out.println();
                    errors++;
                }
            }

            out.println("/* Total: " + count + " decompiled, " + errors + " errors */");
        }

        decompiler.dispose();
        println("ExportDecompiled: done — " + count + " functions, " + errors + " errors.");
    }
}
