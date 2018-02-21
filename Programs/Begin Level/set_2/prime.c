#include <stdio.h>

int main(void)
{
	int a,b,r,sum=0,i;
	scanf("%d ",&a);
	
	for(i=2;i<=a;i++)
	{
		if(a%i==0)
		sum++;
	}
  
	if(sum>1)
	printf("no");
	else
	printf("yes");
	return 0;
}
