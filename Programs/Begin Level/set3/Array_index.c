#include<stdio.h>

int main(void)
{
	int n,s[50],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\n %d  %d",s[i],i);
	}
	
return 0;
}
