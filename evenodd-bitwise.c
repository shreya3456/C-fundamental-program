#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Enter a no.");
	scanf("%d",&num);
	if(num&1==1){
		printf("odd no.");
		
	}
	else{
		printf("even no.");
	}
	
	return 0;
}
