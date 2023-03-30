#include <stdio.h>

int isPrime(int num);

int main()
{
    int start, end, i, flag;

    printf("Enter the start and end of the interval: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are: ", start, end);

    for (i = start; i <= end; i++)
    {
        flag = isPrime(i);

        if (flag == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}

int isPrime(int num)
{
    int i;

    if (num <= 1)
    {
        return 0;
    }

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

