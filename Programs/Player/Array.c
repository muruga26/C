    #include <stdio.h>
    int max(int res[10]);
    int main(void) {
    	int a[10],b,i;
    	for(i=0;i<10;i++)
    	{
    		scanf("%d",&a[i]);
    	}
    	b=max(a);
    	printf("largest element is:%d",b);
    	return 0;
    }
    int max(int res[10])
    {
    	int large=res[0];
    	for(int i=1;i<10;i++)
    	{
    		if(res[i]>large)
    		large=res[i];
     
    	}
    	return(large);
    }
