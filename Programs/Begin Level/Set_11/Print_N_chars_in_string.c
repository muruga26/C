#include <stdio.h>
#include<string.h>

int main(void) {
	char a[50];
	int i,n,b;
	scanf("%s",a);
	scanf("%d",&n);
	b=strlen(a);
	
	for(i=b-n;i<b;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
