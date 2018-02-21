#include <stdio.h>

int main(void) {
	int a,i,sum=1;
	scanf("%d",&a);
	for(i=1;i<=5;i++)
	{
		sum=a*i;
		printf("%d ",sum);
	}
	return 0;
}
