#include <stdio.h>

int main(void) {
	
	int a,b,r,sum=0;
  scanf("%d ",&a);
	b=a;
	while(a>0)
	{
	r=a%10;	
  a=a/10;
  sum=sum*10+r;
  }
	if(sum==b)
	printf("yes");
	else
	printf("no");

	return 0;
}
