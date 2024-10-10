#include<stdio.h>
#include<conio.h>
int main()
{
	int 
	printf("Enter a no.");
	scanf("%d",&n);
	while(n>0)
	{
		r=r%10;
		s=s+r;
		n=n/10;
		
	}
	printf("sum=%d",s);

	
	return 0;
}

