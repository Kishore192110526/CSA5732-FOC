#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int *arr1 = (int *)malloc(5 * sizeof(int));
    if (arr1 == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

   
    int *arr2 = (int *)calloc(5, sizeof(int));
    if (arr2 == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

  
    int *temp = (int *)realloc(arr1, 10 * sizeof(int));
    if (temp != NULL) {
        arr1 = temp;
    } else {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    
    free(arr1);
    free(arr2);

    return 0;
}

