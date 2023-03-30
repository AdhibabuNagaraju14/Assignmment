#include <stdio.h>

int find_odd_element(int arr[], int size) {
    int i, odd_element = arr[0];
    for (i = 1; i < size; i++) {
        odd_element ^= arr[i];
    }
    return odd_element;
}

int main() {
    int arr[] = {1, 2, 1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int odd_element = find_odd_element(arr, size);
    printf("The odd element in the array is %d\n", odd_element);
    return 0;
}

