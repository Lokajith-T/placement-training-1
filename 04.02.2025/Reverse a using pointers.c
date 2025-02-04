#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int len = strlen(str);
    char *start = str, *end = str + len - 1, temp;
    
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    reverseString(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
