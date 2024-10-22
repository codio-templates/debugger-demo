---

This example demonstrates how to use **Step Into**, **Step Over**, and **Step Out** while debugging a C program in Codio.
![Diagram showing debugger controls from left to right: Resume/Restart Program, Step Over, Step Into, and Step Out, with arrows pointing to their respective icons.](.guides/img/Debugger-over-into-out.png)

{Compile}(gcc -o c/test c/test.c)
{Run .c/test}(./c/test)





---



### Using the Debugger with This Code

![C debugger option in Codio with a dropdown arrow highlighted, indicating the selection of the C debugger from the menu.](.guides/img/debugger-C-select.png)


#### 1. Step Into

   - **What it Does**: When you use "Step Into," the debugger will go into the next line of code that is to be executed. If this line is a function call, the debugger will enter that function and stop at the first line inside it.
   - **When to Use**: This is useful when you want to examine the behavior inside a function call or if you're investigating a specific function and need to see how it executes line by line.
  
   - **Example**:  
   1. Start debugging by setting a breakpoint at line 19: `area = calculateArea(length, width);`.  
   2. Initialize the debugger (select C from the debugger dropdown menu), then select "Resume Program."  
   3. Once the debugger pauses at the breakpoint, use "Step Into" to enter the `calculateArea` function.  
   4. You will see the first line of this function: `int area;`. As you continue stepping through the function, you’ll see the calculation on `area = length * width;` and the value stored in `area`.  
   5. Continue selecting “Step Into” to move through each line of the `calculateArea` function. Once it completes, the debugger will return to the `main` function at the next function call.

#### 2. Step Over

   - **What it Does**: "Step Over" also moves to the next line of code, but it treats function calls differently. If the next line contains a function call, the debugger will execute the entire function call in one step and pause at the next line after the function call.
   - **When to Use**: This is useful when you are not interested in the internal workings of a function and just want to see the effects of the function call. It allows you to skip over the details of the function's implementation.

   - **Example**:  
   1. After stepping into and inspecting the `calculateArea` function, we pause at the next function call, `perimeter = calculatePerimeter(length, width);`.  
   2. Use "Step Over" at this point to skip over the internal logic of the `calculatePerimeter` function. The debugger will not enter the function and will instead pause at the next line: `printf("Area of the rectangle: %d\n", area);`.  
   3. This is particularly useful if you want to quickly observe the result of the perimeter calculation without delving into the function's internal logic.

#### 3. Step Out

   - **What it Does**: If you are inside a function, "Step Out" will complete the current function and return you to the calling function in one step.
   - **When to Use**: Use "Step Out" when you're done inspecting the internal details of a function and want to return to the function call to continue debugging the outer context.
  
   - **Example**:  
   1. After stepping into the `calculateArea` function, you can use "Step Out" to finish the area calculation and return to the line `area = calculateArea(length, width);` in the `main` function.  
   2. Once returned to this line, you can then choose to either "Step Over" the function call (moving to the next line) or "Resume Program" to continue the full execution.
