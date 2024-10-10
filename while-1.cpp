#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1,p=1;
	while(i<=5)
	{
		p=p*i;
		i++;
	}
	printf("product=%d",p);
	return 0;
}
