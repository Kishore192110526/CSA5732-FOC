#include <stdio.h>

int binaryToDecimal(long long binaryNumber) {
    int decimalNumber = 0, remainder, base = 1;

    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;
        decimalNumber += remainder * base;
        binaryNumber /= 10;
        base *= 2;
    }

    return decimalNumber;
}

int main() {
    long long binaryNumber;

    printf("Enter a binary number: ");
    scanf("%lld", &binaryNumber);

    printf("Decimal equivalent: %d\n", binaryToDecimal(binaryNumber));

    return 0;
}

