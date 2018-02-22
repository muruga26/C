#include <stdio.h>

int main(void) 
{
	int kaba,oppo,i;
	for(i=1;i<=3;i++)
	{
	scanf("%d %d\n",&kaba,&oppo);
	if(kaba>oppo)
	{
		printf("\n%d",kaba-oppo);
	}
	else
	{
		printf("\n%d",oppo-kaba);
	}
	}
	return 0;
}
