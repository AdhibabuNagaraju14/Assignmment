#include <stdio.h>

int lcm(int num1, int num2);

int main()
{
    int num1, num2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    printf("LCM of %d and %d is %d.\n", num1, num2, lcm(num1, num2));

    return 0;
}

int lcm(int num1, int num2)
{
    int max, lcm = 1;

    max = (num1 > num2) ? num1 : num2;

    while (1)
    {
        if (max % num1 == 0 && max % num2 == 0)
        {
            lcm = max;
            break;
        }
        max++;
    }

    return lcm;
}

