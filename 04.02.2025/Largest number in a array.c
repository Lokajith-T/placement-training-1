#include <stdio.h>

int main() {
    int n, arr[100];
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    printf("Largest element: %d\n", max);
    return 0;
}
