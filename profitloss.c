#include<stdio.h>
#include<conio.h>
int main()
{
	int cp,sp,l,p;
	printf("Enter cost price and selling price of the product:\n");
	scanf("%d%d",&cp,&sp);
	if(cp>sp) {
		l=cp-sp;
		printf("loss = %d",l);
	}
	else if(cp==sp) {
		printf("No profit no loss");
	}
	else {
		p=sp-cp;
		printf("profit = %d",p);
	}
	return 0;
}
