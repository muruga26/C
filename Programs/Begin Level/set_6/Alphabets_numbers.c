#include<stdio.h>

int main(void)
{
char s[30];
int i,flag=0,flag1=0;
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='5'||s[i]=='4'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
{
flag1=flag1+1;
}
else
{
flag=flag+1;	
}
}
if(flag==0 || flag1==0 )
printf("no");
else
printf("yes");
return 0;
}
