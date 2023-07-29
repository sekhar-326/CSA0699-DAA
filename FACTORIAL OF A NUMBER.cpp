#include <stdio.h>  
int main()  
{  
   int i,fact=1,number;    
   printf("Enter any Number: ");    
   scanf("%d",&number);    
   for(i=1;i<=number;i++)
   {    
        fact=fact*i;    
   }    
   printf("factorial is %d ",fact);
   return 0;
}