#include <stdio.h>

int main(void) {
	
	int n,k,i,j,t,a[20];
	scanf("%d &d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("%d",a[k-1]);
	return 0;
}
