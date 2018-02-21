#include <stdio.h>

int main(void) {

	char ch[20];
	int i,a=0,b=0,c=0;
	gets(ch);
	for(i=0;ch[i]!=NULL;i++)
	{
		if(ch[i]>='0' && ch[i]<='9')
		{
		a++;	
		}
		else if((ch[i]>='a'&&ch[i]<='z') || (ch[i]>='A'&&ch[i]<='Z'))
		{
		b++;
		}
		else
		{
			c++;
		}
		
	}
	printf("%d",c);
	
	return 0;
}
