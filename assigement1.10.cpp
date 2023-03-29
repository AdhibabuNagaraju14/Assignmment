#include <stdio.h>

int main() 
{
    int dec, i, binary[32];
    printf("Enter a decimal number: ");
    scanf("%d", &dec);
    for (i = 0; dec > 0; i++) 
	{
        binary[i] = dec % 2;
        dec /= 2;
    }
    printf("The binary number is: ");
    for (i = i - 1; i >= 0; i--) 
	{
        printf("%d", binary[i]);
    }

    return 0;
}

