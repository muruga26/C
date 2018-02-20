#include <stdio.h>

int main(void) {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	printf("Greatest among three is:%d",a);
	else if(b>a&&b>c)
	printf("Greatest among three is:%d",b);
	else
	printf("Greatest among three is:%d",c);
	return 0;
}
