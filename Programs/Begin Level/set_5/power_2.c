#include <stdio.h>
int main(void) 
{
int num,flag=0,temp;
	scanf("%d",&num);
	temp=num;
	while(temp!=1)
	{
		if(temp%2!=0)
		{
			flag=1;
			break;
			
		}
		temp=temp/2;
	}
	if(flag==0)
	{
		printf("yes",num);
	}
	else if(flag==1)
	{
		printf("no",num);
	}
	return 0;
}
