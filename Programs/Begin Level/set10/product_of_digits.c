#include <stdio.h>

int main(void) {
	int a,b,re=1;
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		re=re*b;
		a=a/10;
		
	}
	printf("%d",re);
	return 0;
}
