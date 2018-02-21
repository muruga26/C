#include <stdio.h>

int main(void) 
{
	int a,b,r,sum=0,count=0;
	scanf(" %d",&a);
	b=a;
	while(a>0)
	{
		a=a/10;
		count++;
	}
	a=b;
	while(a>0)
	{
		r=a%10;
		sum=sum+pow(r,count);
		a=a/10;
	}
	if(sum==b)
	printf("yes");
	else
	printf("no");
	return 0;
}
