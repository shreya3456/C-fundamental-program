#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i=2,p;
	printf("Enter a no.");
	scanf("%d",&n);
	while(i<=n){
		p=p+i*i*i;
		i=i+2;
	}
	printf("%d",p);
	return 0;
}

