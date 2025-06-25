#include <stdio.h>
#include<stdlib.h>
int main() {
    int n;
    int number;
    int *arr;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if(n <= 0) {
        printf("Invalid Input\n");
        do {
            printf("Please enter the number of elements: ");
            scanf("%d", &n);
        } while(n <= 0);
    }
    arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL) {
        printf("Memory Allocation Failed\n");
        return 1;
    }
    for(int i = 0; i < n; i++) {
        printf("Enter the number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The numbers in the array are: ");
    scanf("%d", &number);
    int left = 0, right = n - 1;
    while(left <= right) {
        int mid = (right + left) / 2;
        if(arr[mid] ==number) {
            printf("Elements in the array.");
            return 0;
        }else if(arr[mid] > number) {
            right = mid - 1;
        }else {
            left = mid + 1;
        }
    }
    printf("Element not found\n");
    return 0;
}
