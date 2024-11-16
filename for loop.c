#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,t=9,sum=0;
	printf("Enter the no.");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+t;
		printf("%d",t);
		t=t*10+9;
	}
	printf("%d",sum);
	return 0;
}
