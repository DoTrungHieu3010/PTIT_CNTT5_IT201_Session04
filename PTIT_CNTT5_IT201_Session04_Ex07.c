#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arr;
    int found = 0;
    printf("Enter array size: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Invalid Input");
        do {
            printf("Enter array size: ");
            scanf("%d", &n);
        } while (n < 1);
    }
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation error");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("Enter array number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("Symmetrical pair(%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }
    if (!found) {
        printf("No symmetrical elements");
    }
    free(arr);
    return 0;
}
