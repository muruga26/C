#include <stdio.h>

int main(void) {
	
	int n,a[n],i,b,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&b);

	for(i=0;i<n;i++)
	{
		if(a[i]==b)
		{
			count++;
		}
	}
	printf("Repetition=%d",count);
	
	return 0;
}
