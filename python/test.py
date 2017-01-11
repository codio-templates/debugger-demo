import sys
import subprocess

def run_test(a, b):
  
  num1 = a
  num2 = b
  print(a + b)
  sys.exit(0)

if len(sys.argv) < 3:
  print("Requires 2 arguments")
  exit(1)
  
run_test(sys.argv[1], sys.argv[2])



