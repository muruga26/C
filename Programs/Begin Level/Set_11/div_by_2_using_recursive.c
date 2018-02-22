#include <stdio.h>
int fun(int no)
	{
		if(no%2==0)
		{
		no=no/2;
		return fun(no);
		
		}
		else{
			return no;
		}
		
	}
int main(void) {
		
	
	int no;
	scanf("%d",&no);
	fun(no);
	printf("%d",fun(no));
	
	return 0;
}
