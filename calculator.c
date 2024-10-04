#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	char op;
	printf("Choose an operator from +,-,* or /\n");
	scanf("%c",&op);
	printf("Enter 2 no.s you want to operate\n");
	scanf("%d%d",&a,&b);
	
	switch (op)
	{
		case '+':
			printf("%d is the addition",a+b);
			break;
		case '-':
			printf("%d is the subtraction",a-b);
			break;
		case '*':
			printf("%d is the multiplication",a*b);
			break;
		case '/':
			printf("%d is the division",a/b);
			break;
		default:
			printf("Wrong input");
	}
	return 0;
}
