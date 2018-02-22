#include <stdio.h>

int main(void) 
{
	int n,a[n],i,pl=1,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
       if(a[i]!=pl){
           count++;

       }
       pl++;
   }
   printf("%d",count);

	
	return 0;
}
