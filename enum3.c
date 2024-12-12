#include<stdio.h>
enum months{jan=1,feb,march,april,may,june,july,august,sept,oct,nov,dec};
int main()
{
	enum months i;
	
	for(i=jan;i<=dec;i++){
	printf("%d\n",i);
	}
	return 0;
}
