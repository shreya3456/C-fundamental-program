#include<stdio.h>
#include<conio.h>
int main()
{
	int i,p,n;
	printf("Enter a no.\n");
	scanf("%d",&n);
	i=1;
	do{
		p=n*i;
		printf("%d\n",p);
		i++;
	}
	while(i<=10);
	return 0;
}
