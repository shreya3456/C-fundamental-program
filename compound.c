#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,a,r,ci;
	
	printf("Enter principle amount:\n");
	scanf("%f",&p);
	printf("Enter rate of interest:\n");
	scanf("%f",&r);
	printf("Enter time in years:\n");
	scanf("%f",&t);
	a=p*pow((1+r/100),t);
	ci=a-p;
	printf("compound interest= %f",ci);
	return 0;
}
