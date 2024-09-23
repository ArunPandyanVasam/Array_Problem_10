#include <stdio.h>
#define SIZE 100

int main(void) {
    //  Write a program in C to separate odd and even integers into separate arrays.
    int n, x = 0, y = 0;
    int arr[SIZE], arr1[SIZE], arr2[SIZE];
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    printf("Input %d elements in the array ", n);

    for (int i = 0; i < n; ++i) {
        printf("\nElement - %d: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            arr1[x] = arr[i];
            x++;
        } else {
            arr2[y] = arr[i];
            y++;
        }
    }

    printf("\nThe Even elements are: ");
    for (int i = 0; i < x; ++i) {
        printf("%d ", arr1[i]);
    }

    printf("\nThe Odd elements are: ");
    for (int i = 0; i < y; ++i) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
