#include <stdio.h>
int main(void) 
{
	int n,a,d,sum=0;
	scanf("%d %d %d ",&n,&a,&d);
	for(int i=0;i<n;i++)
	{
		sum=sum+(a+i*d);
	}
	printf("%d",sum);
	return 0;
}
