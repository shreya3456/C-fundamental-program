#include<stdio.h>
#include<conio.h>
int main()
{
	int num,temp;
	printf("Enter a no.");
	scanf("%d",&num);
	do{
		temp=temp*10+num%10;
		num=num/10;
	}
	while(num!=0);
	printf("%d is the reversed no.",temp);
	return 0;
}
