#include <stdio.h>
#include <string.h>

int main()
{
    char b[20];
    int i, length,c;
    int flag = 0;
    scanf("%s", b);
    
    length = strlen(b);
    
    for(i=0;i < length ;i++)
    {
    	if((b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u')||(b[i]=='A'||b[i]=='E'||b[i]=='I'||b[i]=='O'||b[i]=='U'))
        {
        c=1;
        }
    }  
    if(c==1)
    {
    	printf("Yes");
    }
    else
    {
    	printf("No");
    }
    return 0;
}
