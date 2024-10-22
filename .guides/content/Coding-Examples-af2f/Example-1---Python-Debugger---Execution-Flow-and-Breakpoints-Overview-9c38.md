---

Our first example provides an overview of initializing and running the debugger as well as its breakpoint functionality using the Python code file shown on the left.

{run file}(python3 python/test.py)

---

#### What You'll Observe:

- How variables (`x`, `y`, `product`) change values.
- The flow of execution as it enters and exits functions.

### Using the Debugger with This Code

1. **Setting a Breakpoint**: 
Start by setting a breakpoint on line 11, `product = multiply(x, y)`. This tells the debugger to pause execution at this point.

   You can also set additional breakpoints at key points, such as `print_result(product)`, by clicking in the left margin next to the line number.

![Code snippet showing a breakpoint set at line 11, where the variable product is assigned the result of the multiply(x, y) function call. The green arrow points to the breakpoint marker in the left margin.](.guides/img/python_breakpoint.png)

2. **Initialize the Debugger**: 
Select **Python** from the debugger dropdown menu.

![The Python debugger option in Codio with the dropdown arrow highlighted, indicating the selection of the Python debugger from the menu.](.guides/img/python_debugger_select.png)

3. **Resume Program (Run)**: 
Once you've set your breakpoints, click "Resume Program" to run the code until the execution pauses at the first active breakpoint.

![Debugger control showing a green play button labeled 'Resume/Restart Program,' used to continue or restart program execution in the debugger.](.guides/img/Debugger-resume-restart.png)

4. **Resume and Inspect**:
After inspecting the variables at a breakpoint, click "Resume Program" to continue execution. The debugger will stop only at the next active breakpoint, allowing you to control where to pause next.

   - **Suspend Breakpoints**: If you don't need a breakpoint temporarily, suspend it by unchecking the box next to the breakpoint in the debugger panel. The debugger will skip over suspended breakpoints, allowing you to continue uninterrupted.
   - **Remove Breakpoints**: To remove a breakpoint, click on the red circle in the margin or select "Remove" from the list in the debugger panel.

5. **Restart Program**: 
When the program ends, "Restart Program" can be used to restart the program from the beginning.
![Debugger control with a green circular arrow button highlighted, labeled 'Resume Program,' indicating the button to resume program execution in the debugger.](.guides/img/restart-program.png)
