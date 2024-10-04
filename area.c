#include<stdio.h>
#include<conio.h>
int main()
{
	int ch,l,b,r,a=0,base,h;
	
	printf("Choose 1 to work with rectangle, 2 for circle, 3 for triangle");
	scanf("%d",&ch);
	switch (ch)
	{
		case 1:
			printf("Enter length and breadth:\n");
			scanf("%d%d",&l,&b);
			a=l*b;
			printf("area=%d",a);
			break;
		case 2:
			printf("Enter radius:\n");
			scanf("%d",&r);
			a=3.14*r*r;
			printf("area=%d",a);
			break;	
		case 3:
			printf("Enter base and height:\n");
			scanf("%d%d",&base,&h);
			a=(base*h)/2;
			printf("area=%d",a);
			break;
		default:
			printf("wrong input");
	}
	return 0;
}
