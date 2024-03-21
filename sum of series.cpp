#include <stdio.h>

int main() {
    int n, sum = 0, sequence_sum = 0;

    // Prompt the user to enter the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for (int i = 1; i <= n; i++) {
        sequence_sum += i;  // Calculate sum of sequence from 1 to i
        sum += sequence_sum;  // Add sum of sequence to overall sum
    }

    // Display the sum
    printf("Sum of the series 1 + (1+2+3) + ... + %d = %d\n", n, sum);

    return 0;
}


