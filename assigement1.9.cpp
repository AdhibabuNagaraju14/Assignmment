#include <stdio.h>

int main() 
{
    int num, digit, rev = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    for ( ; num != 0; num /= 10) 
	{
        digit = num % 10;
        rev = rev * 10 + digit;
    }
    printf("The reverse of the integer is: %d\n", rev);

    return 0;
}

