#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    int len1, len2, i, j, found;
    int freq1[MAX_SIZE], freq2[MAX_SIZE];

    printf("Enter first string: ");
    fgets(str1, MAX_SIZE, stdin);
    printf("Enter second string: ");
    fgets(str2, MAX_SIZE, stdin);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2)
    {
        printf("The strings are not anagrams.\n");
        return 0;
    }
    for (i = 0; i < MAX_SIZE; i++)
    {
        freq1[i] = freq2[i] = 0;
    }
    for (i = 0; i < len1; i++)
    {
        freq1[str1[i]]++;
        freq2[str2[i]]++;
    }
    for (i = 0; i < MAX_SIZE; i++)
    {
        if (freq1[i] != freq2[i])
        {
            found = 0;
            break;
        }
        found = 1;
    }

    if (found)
    {
        printf("The strings are anagrams.\n");
    }
    else
    {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}

