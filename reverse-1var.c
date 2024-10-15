#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Enter the no.");
	scanf("%d",&num);
	do{
		printf("%d",num%10);
		num/=10;
	}
	while(num!=0);
	return 0;
}
