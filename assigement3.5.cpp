#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int freq[MAX_SIZE];
    int i, j, max, len;

    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);
    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        freq[i] = 1;
        for (j = i + 1; j < len; j++)
        {
            if (str[i] == str[j] && str[i] != ' ' && str[i] != '\n')
            {
                freq[i]++;
            }
        }
    }

    max = freq[0];
    for (i = 0; i < len; i++)
    {
        if (freq[i] > max)
        {
            max = freq[i];
        }
    }

    printf("Max repeated character in the string = ");
    for (i = 0; i < len; i++)
    {
        if (freq[i] == max && str[i] != ' ' && str[i] != '\n')
        {
            printf("%c ", str[i]);
        }
    }

    printf("\nIt occurs %d times.\n", max);

    return 0;
}

