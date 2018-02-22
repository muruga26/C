#include <stdio.h>
int main(void) 
{
	int i,b,count=0;
	scanf("%d",&b);
	for(i=2;i<=b;i++)
	{
		if(b%i==0)
		count++;
	}
	if(count==1)
	printf("yes");
	else
	printf("no");
  return 0;
}
