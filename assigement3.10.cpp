#include <stdio.h>
#include <string.h>

void reverse(char*);

int main()
{
    char str[100];

    printf("Enter any string: ");
    scanf("%s", str);

    reverse(str);

    printf("The Reverse of the String [%s] is :: %s\n", str, str);

    return 0;
}

void reverse(char *str)
{
    int i, len;
    char *begin_ptr, *end_ptr, ch;

    len = strlen(str);

    begin_ptr = str;
    end_ptr = str;

    for (i = 0; i < len - 1; i++)
    {
        end_ptr++;
    }

    for (i = 0; i < len / 2; i++)
    {
        ch = *end_ptr;
        *end_ptr = *begin_ptr;
        *begin_ptr = ch;

        begin_ptr++;
        end_ptr--;
    }
}

