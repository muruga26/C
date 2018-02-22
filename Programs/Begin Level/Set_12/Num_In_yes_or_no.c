#include <stdio.h>

int main(void) {
	int a[25],n,i,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&b);
	for(i=0;i<n;)
	{
		if(b==a[i])
		{
			printf("Yes");
			break;
		}
		else{
			i++;
		}
		if(b!=a[i])
		{
			printf("No");
			break;
		}
	}
	return 0;
}
