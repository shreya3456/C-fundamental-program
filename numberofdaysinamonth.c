#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter a no. from 1-12");
	scanf("%d",&n);
	if (n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12)
	{
		printf("31 days");
	}
	else if (n==4 || n==6 || n==9 || n==11)
	{
		printf("30 days");
	}
	else if (n==2)
	{
		printf("28 or 29 days depending upon leap year.");
	}
	else
	{
		printf("Wrong input");
	}
	return 0;
}
