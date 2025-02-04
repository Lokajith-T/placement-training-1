#include <stdio.h>

void mergeSortedArrays(int a[], int n, int b[], int m, int result[]) {
    int i = 0, j = 0, k = 0;
    
    while (i < n && j < m) {
        if (a[i] < b[j])
            result[k++] = a[i++];
        else
            result[k++] = b[j++];
    }

    while (i < n) result[k++] = a[i++];
    while (j < m) result[k++] = b[j++];
}

int main() {
    int a[100], b[100], result[200], n, m;

    printf("Enter size of first array: ");
    scanf("%d", &n);
    printf("Enter elements of first sorted array: ");
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &m);
    printf("Enter elements of second sorted array: ");
    for (int i = 0; i < m; i++) scanf("%d", &b[i]);

    mergeSortedArrays(a, n, b, m, result);

    printf("Merged sorted array: ");
    for (int i = 0; i < n + m; i++) printf("%d ", result[i]);
    
    return 0;
}
