public class Addition {
  public static void main(String[] args) {
    if (args.length >= 2) {
      int x = Integer.parseInt(args[0]);
      int y = Integer.parseInt(args[1]);
      int result = add(x, y);
      System.out.println("Result: " + result);
    } else {
      System.out.println("Please provide two integers as command-line arguments.");
    }
  }

  public static int add(int a, int b) {
    return a + b;
  }
}
