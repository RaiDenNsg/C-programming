#include <stdio.h>

int main()
 {
   int n[10];
   int i,max;
    printf("Enter a number ");
    	for (i=0;i<10;i++)
    	{
    		scanf("%d",&n[i]);
		}
    
    max=n[0];
        printf("\nComparing Value");
    for(i=1;i<10;i++)
    {
    	if(max>n[i])
    	{
    		max=n[i];
		}
		}
    		printf("the maximum value is %d",max);
		
    	
	
    return 0;
}