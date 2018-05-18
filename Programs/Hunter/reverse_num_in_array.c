#include <stdio.h>

int main(void) {
	// your code goes here
	int n,a[10],i,j,count=0,b[10],temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			b[i]=a[i];
			}
		
		}
	}
	for(i=0;i<=count;i++)
	{
		for(j=i+1;j<=count;j++)
		{
			if(b[i]>b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	for(i=1;i<=count;i++)
	{
		printf("%d",b[i]);
	}
			
	return 0;
}
