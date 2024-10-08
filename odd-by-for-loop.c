#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter any no.\n");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+2)
	{
		printf("%d\n",i);
		sum=sum+i;
	}
	printf("sum of odd no.s till %d is %d",n,sum);
	return 0;
}
