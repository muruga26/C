#include <stdio.h>
 
int main(void) {
	int p,t,r,interest=0;
	scanf("%d %d %d",&p,&t,&r);
	interest=(p*t*r)/100;
	printf("%d",interest);
	return 0;
}
