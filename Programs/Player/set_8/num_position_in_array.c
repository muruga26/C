#include <stdio.h>
 
int main(void)
{
	
	int n,a[n],i,num;
	scanf("%d %d",&n,&num);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			printf("%d",i+1);
 
		}
	}
	return 0;
}
