#include <stdio.h>
#include <math.h>

int main() {
    double number, squareRoot;

    // Prompt the user to enter the number
    printf("Enter a number: ");
    scanf("%lf", &number);

    // Calculate the square root
    squareRoot = sqrt(number);

    // Display the square root
    printf("Square root of %.2lf = %.2lf\n", number, squareRoot);

    return 0;
}

