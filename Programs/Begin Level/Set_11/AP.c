#include <stdio.h>

int main(void) {
	
	int A,B,C,sum=0;
	scanf("%d %d %d",&A,&B,&C);
	for(int i=0;i<C;i++)
	{
		sum=sum+A;
		A=A+B;
	}
	printf("%d",sum);
	return 0;
}
