#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arr;
    int max;
    int maxInteger;
    printf("Enter number of array: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Invalid Input\n");
        do {
            printf("Please enter number of array: ");
            scanf("%d", &n);
        } while (n < 1);
    }
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation error");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("Please enter array number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxInteger = i;
        }
    }
    printf("%d", maxInteger);
    free(arr);
    return 0;
}