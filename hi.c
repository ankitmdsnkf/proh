#include <stdio.h>

int main() {
    float length, breadth, area;

    // Prompt the user to enter the length
    printf("Enter the length of the rectangle: ");
    // Read the length from user input
    scanf("%f", &length);

    // Prompt the user to enter the breadth
    printf("Enter the breadth of the rectangle: ");
    // Read the breadth from user input
    scanf("%f", &breadth);

    // Calculate the area using the formula: Area = Length * Breadth
    area = length * breadth;

    // Display the calculated area, formatted to two decimal places
    printf("The Area of the Rectangle is: %.2f\n", area);

    return 0;
}