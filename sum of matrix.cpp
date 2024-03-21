#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int mat1[ROWS][COLS], mat2[ROWS][COLS], sum[ROWS][COLS];

    printf("Enter elements of first matrix (%d x %d):\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter elements of second matrix (%d x %d):\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            scanf("%d", &mat2[i][j]);

    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            sum[i][j] = mat1[i][j] + mat2[i][j];

    printf("Sum of the matrices:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++)
            printf("%d\t", sum[i][j]);
        printf("\n");
    }

    return 0;
}

