---

This example demonstrates how to configure a custom debugger target in Codio using Java, with a focus on passing command-line arguments and observing results in the Console.

{Compile}(javac java/Addition.java)

{Run}(java -cp java Addition 10 20)

---


### Using the Debugger with This Code



1. **Open the Debugger Tab and Configure the Target**:  
   - Open the **Debugger** tab drop-down menu.
![Codio debugger dropdown arrow highlighted, showing the 'Configure' option selected from the menu.](.guides/img/debugger-configure.png)
   - Click **Configure** and either create a new target or click the pencil icon next to the **java** debugger target.

   - In the **Configure Target** screen (scroll up to view):
     - **Debugger type**: Select **Single Java File**.
     - **Root folder**: Set the folder to `java` where your `Addition.java` file is located.
     - **Classname or file path**: Enter `Addition`, which is the name of your Java class.
     - **Arguments**: Enter two integers (e.g., `10 20`). These values will be passed as command-line arguments to the program.
   - Click **Save Target** to store the configuration.


2. **Run the Debugger**:
   Start the java debugger. The program will pause at the first executable line in `main()` (where `args.length >= 2` is checked).

![Java debugger option in Codio with a dropdown arrow highlighted, indicating the selection of the java debugger from the menu.](.guides/img/debugger-java-select.png)

3. **Inspect the `args` Variable**:  
   At this pause, inspect the **Local Variables** section. You should see that the `args` variable contains the command-line arguments you entered (e.g., `"10"` and `"20"`).

![Debugger panel showing the Local Variables section with `args` array containing two string values: '10' and '20', indicated by a green arrow.](.guides/img/args.png)

4. **Set a Breakpoint**:  
   Set a breakpoint on the line `int result = add(x, y);`. This will pause the program right before the result of the addition is computed, allowing you to inspect the values of `x` and `y`.

5. **Resume and Inspect Local Variables**:  
   - Click **Resume Program** to continue execution until it pauses at the breakpoint.
   - Inspect the **Local Variables** panel to see the initialized values of `x` and `y`.

6. **Resume and Check the Output**:  
   Click **Resume Program** again to allow the program to finish execution. Check the **Console** to verify the output. You should see the result of the addition (e.g., `Result: 30`).