#include <stdio.h>

int main(void) 
{
	int a[10],b[10],n,m,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("%d\n",n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n%d\n",m);
	for(i=0;i<m;i++)
	{
		printf("%d ",b[i]);
	}
	
	return 0;
}
