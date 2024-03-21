#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int count = 0;

   
    printf("Enter the filename: ");
    scanf("%s", filename);

  
    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        count++;
    }

    fclose(file);

    printf("Number of characters in the file: %d\n", count);

    return 0;
}

