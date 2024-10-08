#include<stdio.h>
#include<conio.h>
int main()
{
	int r,m1,m2,m3,total;
	float percentage;
	char n[20];
	printf("Enter your roll no.:\n");
	scanf("%d",&r);
	printf("Enter your name:\n");
	scanf("%s",&n);
	printf("Enter marks of maths,science and english\n");
	scanf("%d%d%d",&m1,&m2,&m3);
	total=m1+m2+m3;
	printf("total marks=%d\n",total);
	percentage=total/3;
	printf("percentage = %f\n",percentage);
	if (percentage>60)
	{
		printf("1st division");
	}
	else if(percentage>40 && percentage<=60)
	{
		printf("2nd division");
	}
	else
	{
		printf("3rd division");
	}
	return 0;
}
