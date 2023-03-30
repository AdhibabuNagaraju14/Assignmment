#include <stdio.h>
#include <string.h>

void swap(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *str, int l, int r)
{
    int i;

    if (l == r)
        printf("%s\n", str);
    else
    {
        for (i = l; i <= r; i++)
        {
            swap((str + l), (str + i));
            permute(str, l + 1, r);
            swap((str + l), (str + i));
        }
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = '\0'; // Remove trailing newline character

    printf("All permutations of the given string:\n");
    permute(str, 0, strlen(str) - 1);

    return 0;
}

