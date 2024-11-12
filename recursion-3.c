#include<stdio.h>
int table(int,int);
int main()
{
	int n;
	printf("Enter the no.");
	scanf("%d",&n);
	table(n,1);
}
int table(int a, int b){
	if(b>10){
		return;
	}
	printf("%d x %d = %d\n",a,b,a*b);
	table(a,b+1);
}
