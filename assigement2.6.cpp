#include <stdio.h>

int main() {
    int arr[100], size, i, temp;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter elements of array: ");
    for(i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<size/2; i++) {
        temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }

    printf("Reverse of array: ");
    for(i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

