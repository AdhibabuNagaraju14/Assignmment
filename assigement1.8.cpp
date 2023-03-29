#include <stdio.h>

int main() 
{
    int num, digit, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    for ( ; num != 0; num /= 10) 
	{
        digit = num % 10;
        sum += digit;
    }
    printf("The sum of digits of the integer is: %d\n", sum);

    return 0;
}

