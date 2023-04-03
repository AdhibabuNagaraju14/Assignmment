#include <stdio.h>
int main() {
    int dec, rem,j,i = 0;
    int binary[100];

    printf("Enter a decimal number: ");
    scanf("%d", &dec);

    while (dec > 0) {
        rem = dec % 2;
        binary[i] = rem;
        i++;
        dec = dec / 2;
    }

    printf("Binary number: ");
    for (j = i - 1; j >= 0; j--)  
	{
        printf("%d", binary[j]);
    }

    printf("\n");

    return 0;
}
