#include <stdio.h>
 
int main(void) {
	
	char a[100000];
	int i=0,len=0;
	scanf("%s",a);
	while(a[i]!='\0')
	{
		len++;
		i++;
	}
	for(i=len;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	return 0;
}
