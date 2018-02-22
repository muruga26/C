#include <stdio.h>
int main(void) 
{
	int i=1,b,count=0;
	scanf("%d",&b);
	if(b<=1000)
	{
	while(i<=b)
	{
		i=i*2;
		if(i>b)
		{
		printf("%d",i);	
		}
	}
	}
}
