#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char data[100];

    
    file = fopen("data.txt", "w");

   
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

   
    printf("Enter data to store in the file: ");
    fgets(data, sizeof(data), stdin);

   
    fputs(data, file);

    
    fclose(file);

    
    file = fopen("data.txt", "r");

   
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

  
    printf("\nData read from file:\n");
    while (fgets(data, sizeof(data), file) != NULL) {
        printf("%s", data);
    }

    
    fclose(file);

    return 0;
}

