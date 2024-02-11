#include <stdio.h>

int main() {
   int n[10];
   int i;
   for (i=0;i<10;i++)
    {
    	printf("Enter a number ");
    	scanf("%d",&n[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("Element[%d] = %d\n",i,n[i]);
    }
    return 0;
}