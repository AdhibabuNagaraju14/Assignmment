#include <stdio.h>

void find_largest_two(int arr[], int n, int* largest, int* second_largest);

int main() {
    int arr[] = {1, 5, 3, 7, 8, 2, 6};
    int n = sizeof(arr) / sizeof(int);
    int largest, second_largest;

    find_largest_two(arr, n, &largest, &second_largest);

    printf("The largest two numbers are: %d and %d\n", largest, second_largest);

    return 0;
}

void find_largest_two(int arr[], int n, int* largest, int* second_largest) {
    if (n < 2) {
        printf("Array should contain at least two elements.\n");
        return;
    }

    *largest = arr[0];
    *second_largest = arr[1];

    for (int i = 2; i < n; i++) {
        if (arr[i] > *largest) {
            *second_largest = *largest;
            *largest = arr[i];
        } else if (arr[i] > *second_largest) {
            *second_largest = arr[i];
        }
    }
}

