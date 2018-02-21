#include <stdio.h>

int main(void)
{
	
	int h1,h2,m1,m2,n1,n2,n;
	scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
	n=(h1*60+m1)-(h2*60+m2);
	n1=n/60;
	n2=n%60;
  printf("%d %d",n1,n2);
	return 0;
}
