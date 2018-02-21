#include <stdio.h>

int main(void) 
{
  int a,b,sum=0;
	scanf("%d %d",&a,&b);
	for(int i=a+1;i<b;i++)
	{
	sum=0;
		for(int j=1;j<=i;j++)
		{
		if(i%j==0)
		sum++;
		}
	if(sum<=2)
	printf("%d   ",i);
	}
	return 0;
}
