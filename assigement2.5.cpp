#include <stdio.h>

void remove_duplicates(int arr[], int *size) {
    int i, j, k;
    for (i = 0; i < *size; i++) {
        for (j = i + 1; j < *size;) {
            if (arr[j] == arr[i]) {
                for (k = j; k < *size; k++) {
                    arr[k] = arr[k + 1];
                }
                *size = *size - 1;
            } else {
                j++;
            }
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array before removing duplicates:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    remove_duplicates(arr, &size);

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

