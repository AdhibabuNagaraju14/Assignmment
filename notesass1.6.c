#include<stdio.h>
int main()
{
	int a;
	int n500,n100,n50,n20,n10,n5,n2,n1;
	n500=n100=n50=n20=n10=n5=n2=n1=0;
	printf("Enter the amount: ");
	scanf("%d",&a);
	
	if(a>=500)
	{
		n500=a/500;
		a-=n500*500;
	}
	if(a>=100)
	{
		n100=a/100;
		a-=n100*100;
	}
	if(a>=50)
	{
		n50=a/50;
		a-=n50*50;
	}
	if(a>=20)
	{
		n20=a/20;
		a-=n20*20;
	}
	if(a>=10)
	{
		n10=a/10;
		a-=n10*10;
	}
	if(a>=5)
	{
		n5=a/5;
		a-=n5*5;
	}
	if(a>=2)
	{
		n2=a/2;
		a-=n2*2;
	}
	if(a>=1)
	{
		n1=a;
	}
	printf("Totalnumber of notes= \n");
	printf("500 = %d\n",n500);
	printf("100 = %d\n",n100);
	printf("50 = %d\n",n50);
	printf("20 = %d\n",n20);
	printf("10 = %d\n",n10);
	printf("5 = %d\n",n5);
	printf("2 = %d\n",n2);
	printf("1 = %d\n",n1);
	return 0;
}
