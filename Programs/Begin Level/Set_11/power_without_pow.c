#include <stdio.h>

int main(void) {
	int n,k,re=1,i,temp;
	scanf("%d %d",&n,&k);
	for(i=1;i<=k;i++)
	{
		temp=n;
		re=re*temp;
	}
	printf("%d",re);

	return 0;
}
