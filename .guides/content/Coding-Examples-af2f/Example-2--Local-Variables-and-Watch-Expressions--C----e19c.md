---
This example demonstrates how to observe local variables and set watch expressions while debugging.


{Compile}(g++ -o cpp/test cpp/test.cpp)
{Run}(./cpp/test)

---

### Using the Debugger with This Code



1. **Start the Debugger and Initial Pause**:  
![C++ debugger option in Codio with a dropdown arrow highlighted, indicating the selection of the C++ debugger from the menu.](.guides/img/debugger-Cpp-select.png)
    When the debugger starts, it will pause at the first executable line in `main()`, `int a = 5;`. Variables `a`, `b`, and `result` will appear in the debugger with uninitialized values, even though they haven’t been assigned yet. This is expected behavior as memory has already been allocated for them.



|||info

In C++ and C, memory is reserved for all local variables when the function starts. Uninitialized variables may show "garbage values" from previous data in memory.

|||


2. **Set a Breakpoint**:  
   Set a breakpoint at the line `int result = a + b;`. This is where you will inspect the values of the local variables `a`, `b`, and `result` once the program pauses. After setting the breakpoint, click "Resume Program" to continue execution until the breakpoint is hit.

3. **Observe Local Variables**:  
   When the code pauses at the breakpoint, observe the local variables in the debugger panel. The values of `a`, `b`, and `result` will be displayed and will update as the program progresses through this stage. This helps verify that your variables are holding the expected values at this point in the program.

4. **Add a Watch Expression**:  
   To track the value of a specific variable during execution, add it to the watch list. In the debugger panel, locate the "Watches" section, select **+**, and add `result`. 
   
   After adding the watch, set an additional breakpoint after `int result = a + b;` so the debugger can pause again and show the updated value of `result`.

5. **Resume Program**:  
   After verifying the local variables and adding any desired watch expressions, resume the program to let it complete execution. The debugger will run to completion or pause at the next breakpoint if any are set.

