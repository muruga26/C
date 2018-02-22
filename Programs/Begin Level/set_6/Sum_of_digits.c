#include <stdio.h>

int main(void) {
	int a,sum=0,r;
	scanf("%d",&a);
	while(a>0)
	{
   r=a%10;
    a=a/10;
    sum=sum+r;
	}
  printf("%d",sum);
	
	return 0;
}
