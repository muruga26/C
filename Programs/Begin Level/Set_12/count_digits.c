#include <stdio.h>

int main(void) {
	int n,b,dig=0;
	scanf("%d",&n);
	while(n!=0)
	{
		b=n%10;
		dig++;
		n=n/10;
	}
	printf("%d",dig);
	return 0;
}
