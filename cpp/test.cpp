#include <iostream>
#include <stdlib.h>

int main(int argc, char* argv[])
{

    std::cout << argv[0] << std::endl;
    
    int a = atoi(argv[0]);
    int b = atoi(argv[1]);
  
    int c = a + b;
  
    std::cout << c << std::endl;
    return 0;
}