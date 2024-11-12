#include<stdio.h>
int sum(int);
int main()

{
	int a,c;
	printf("Enter the no.");
	scanf("%d",&a);
	c= sum(a);
	printf("%d",c);
}
int sum(int a){
	if (a==0)
	{
		return 1;
	}
	else if(a==1)
	{
		return 1;
	}
	else{
		return a+sum(a-1);
	}
}
