#include<stdio.h>
int swap(int,int);
int main()
{
	int a,b,c;
	a=5;
	b=6;
	swap(a,b);
	return 0;
}
int swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("Value of a = %d and Value of b = %d",x,y);
	return (x,y);
}
