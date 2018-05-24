#include <stdio.h>

int main(void) {
	
	int n,a[20],i,j,k,l,g,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		k=a[i];
		for(j=0;j<n;j++)
		{
			l=a[j];
			g=k+l;
			if(g==0)
			{
				printf("%d %d",a[i],a[j]);
				count++;
				
			}
		}
		if(count==1)
		{
			break;
		}
		
			
	}
	return 0;
}
