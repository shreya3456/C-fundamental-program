#include<stdio.h>
#include<conio.h>
int main()
{
	int m,r=0,n;
	printf("Enter a no.");
	scanf("%d",&n);
	do{
		m=n%10;
		r=r*10+m;
		n=n/10;
	}
	while(n!=0);
	printf("%d is the reversed no.",r);
	return 0;
}
