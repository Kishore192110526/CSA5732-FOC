#include <stdio.h>

#define ROW 3
#define COL 3

void transpose(int mat[][COL], int trans[][ROW]) {
    int i, j;

    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            trans[j][i] = mat[i][j];
        }
    }
}

int main() {
    int mat[ROW][COL] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int trans[COL][ROW];
    int i, j;

  
    transpose(mat, trans);

    
    printf("Original Matrix:\n");
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

   
    printf("Transpose Matrix:\n");
    for (i = 0; i < COL; i++) {
        for (j = 0; j < ROW; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}

