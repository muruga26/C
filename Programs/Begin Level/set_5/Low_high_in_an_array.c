#include <stdio.h>

int main(void) 
{
	int array[100];
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&array[i]);
	}
	int max=array[0];
	int min=array[0];
	for(i=1;i<n;i++)
	{
		if(array[i]>max)
		{
			max=array[i];
		}
		if(array[i]<min)
		{
			min=array[i];
		}
	}
	printf("%d",min);
	printf(" %d",max);
  return 0;
}
