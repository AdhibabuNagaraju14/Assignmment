#include<stdio.h>
int main()
{
	char ch;
	printf("enter the character:");
	scanf("%s",&ch);
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
	{
		printf("%s is alphabet");
	}
	else 
	{
		printf("%s is not a alphabet");
	}
	return 0;
}
