#include <stdio.h>

int main()
 {
   int n[10];
   int i,min;
    printf("Enter a number ");
    	for (i=0;i<10;i++)
    	{
    		scanf("%d",&n[i]);
		}
    
    min=n[0];
        printf("\nComparing Value");
    for(i=1;i>10;i++)
    {
    	if(min>n[i])
    	{
    		min=n[i];
		}
		}
    		printf("the minimum value is %d",min);
		
    	
	
    return 0;
}