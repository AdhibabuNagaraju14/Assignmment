#include<stdio.h>
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	if(n<0)
	{
		printf("the number is negetive");
	}
	else if(n==0)
	{
		printf("the number is zero");
	}
	else
	{
		printf("the number is positive");
	}
	return 0;
}
