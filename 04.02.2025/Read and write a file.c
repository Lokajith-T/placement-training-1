#include <stdio.h>

int main() {
    FILE *fptr;
    char text[100];

    fptr = fopen("sample.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter a string: ");
    gets(text);
    fprintf(fptr, "%s", text);
    fclose(fptr);

    fptr = fopen("sample.txt", "r");
    if (fptr == NULL) {
        printf("Error reading file.\n");
        return 1;
    }

    printf("File content: ");
    while (fgets(text, sizeof(text), fptr)) {
        printf("%s", text);
    }
    
    fclose(fptr);
    return 0;
}
