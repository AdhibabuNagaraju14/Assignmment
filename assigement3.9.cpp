#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int arr1[MAX_SIZE], arr2[MAX_SIZE];
    int i, size;

    int *ptr1 = arr1;
    int *ptr2 = arr2;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");

    for (i = 0; i < size; i++)
    {
        scanf("%d", ptr1 + i);
    }

    for (i = 0; i < size; i++)
    {
        *(ptr2 + i) = *(ptr1 + i);
    }

    printf("\nElements of the first array: ");

    for (i = 0; i < size; i++)
    {
        printf("%d ", *(ptr1 + i));
    }

    printf("\nElements of the second array: ");

    for (i = 0; i < size; i++)
    {
        printf("%d ", *(ptr2 + i));
    }

    return 0;
}

