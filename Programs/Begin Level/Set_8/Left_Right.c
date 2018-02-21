#include <stdio.h>

int main(void) {
	int n,l,r,i;
	scanf("%d",&n);
	scanf("%d %d",&l,&r);
	for(i=l+1;i<r;i++)
	{
		if(i==n)
		{
			printf("yes");
			break;
			
		}
		
	}
	if(i!=n)
	{
		printf("No");
	}
	
	return 0;
}
