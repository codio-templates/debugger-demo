---
This example covers how to use the Console to view the output of your program, including log statements and warnings.

{Run}(node nodejs/test.js 100 200)

---

### Using the Debugger with This Code

![NodeJS debugger option in Codio with a dropdown arrow highlighted, indicating the selection of the NodeJS debugger from the menu.](.guides/img/debugger-NodeJS-select.png)


1. **Set a Breakpoint**:  
   Set a breakpoint at the `return a * b;` statement. This allows you to pause execution after the `console.log("Multiplying", a, "and", b);` statement has been logged in the **Console**. By pausing here, you can inspect the values of `a` and `b` in the **Local Variables** section after they have been logged to the console.

2. **View Console Output**:  
   Start the debugger. As the code runs, the **Console** tab displays all output from `console.log` statements. Use this to verify the behavior of your program. You can see the initial program output and any values logged to the console appear here in real-time.

   - This is especially helpful for identifying issues like incorrect values or unexpected behavior. Any output generated during execution will be visible directly in the Console.

3. **Resume Program**:  
   Click **Resume Program** to continue execution. As the program runs, observe how the output changes in the **Console** as the code proceeds through different stages. This lets you monitor both the initial multiplication log and the final result.

   - If there are any runtime errors or warnings, they will also be displayed here, helping you diagnose potential issues without needing to manually check the source code.
