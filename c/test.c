#include <stdio.h>

int calculateArea(int length, int width) {
    int area;
    area = length * width;
    return area;
}

int calculatePerimeter(int length, int width) {
    return 2 * (length + width);
}

int main() {
    int length = 10;
    int width = 5;
    int area, perimeter;

    // Calculate the area
    area = calculateArea(length, width);

    // Calculate the perimeter
    perimeter = calculatePerimeter(length, width);

    printf("Area of the rectangle: %d\n", area);
    printf("Perimeter of the rectangle: %d\n", perimeter);

    return 0;
}

