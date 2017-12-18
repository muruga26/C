#include <stdio.h>
int count1=0;

int main(void) {
	int count=1;
	{
		int count=2;
		printf("%d\n",count);
	}
	printf("%d\n",count);
	printf("%d\n",count1);
	
	return 0;
}
