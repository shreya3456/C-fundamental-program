#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i=1,p=1;
	printf("Enter a pve no.");
	scanf("%d",&n);
	if(n>0)
	{
		while (i<=n)
		{
			p=p*i;
			i++;
		}
		printf("%d",p);
	}
	else{
		printf
		("Wrong entry");
	}
	return 0;
}
