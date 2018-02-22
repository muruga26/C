#include <stdio.h>

int main(void)
{
	int i,b,count=0;
	scanf("%d",&b);
	if(b<=1000)
	{
	i=b%10;
	count=10-i;
	b=b+count;
	printf("%d",b);
	}
  return 0;
}
