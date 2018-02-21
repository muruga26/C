#include <stdio.h>

int main(void) {

	char ch[20];
	int i,a=0;
	gets(ch);
	for(i=0;ch[i]!=NULL;i++)
	{
		if(ch[i]>='0' && ch[i]<='9')
		{
		a++;	
		}
	}
	printf("%d",a);
	return 0;
}
