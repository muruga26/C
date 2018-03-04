#include <stdio.h>

int main(void) {

	int N,K,a[N],i,count=1;
	scanf("%d %d",&N,&K);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<N;i++)
	{
		if(a[i]%2==1)
		{
			if(count==K)
			{
				printf("%d",a[i]);
			}
		count=count+1;
		}
	}
	
	return 0;
}
