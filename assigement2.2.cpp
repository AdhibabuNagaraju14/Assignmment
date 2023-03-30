#include <stdio.h>
#include <limits.h>

void find_second_largest_smallest(int arr[], int n, int* second_largest, int* second_smallest);

int main() {
    int arr[] = {1, 5, 3, 7, 8, 2, 6};
    int n = sizeof(arr) / sizeof(int);
    int second_largest, second_smallest;

    find_second_largest_smallest(arr, n, &second_largest, &second_smallest);

    printf("The second largest number is: %d\n", second_largest);
    printf("The second smallest number is: %d\n", second_smallest);

    return 0;
}

void find_second_largest_smallest(int arr[], int n, int* second_largest, int* second_smallest) {
    if (n < 2) {
        printf("Array should contain at least two elements.\n");
        return;
    }

    int largest = INT_MIN, smallest = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            *second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > *second_largest && arr[i] != largest) {
            *second_largest = arr[i];
        }

        if (arr[i] < smallest) {
            *second_smallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < *second_smallest && arr[i] != smallest) {
            *second_smallest = arr[i];
        }
    }
}

