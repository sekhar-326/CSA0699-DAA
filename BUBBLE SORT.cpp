#include <stdio.h>
int main() 
{
  	int n,i,j;
  	int arr[10];
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
  	for (i = 0; i < n - 1; i++) 
  	{
    	for (j = 0; j < n - i - 1; j++)
	 	{
      		if (arr[j] > arr[j + 1]) 
	  		{
        		int temp = arr[j];
        		arr[j] = arr[j + 1];
        		arr[j + 1] = temp;
      		}
    	}		
  	}
  	printf("Array after implementing Bubble sort: ");
  	for (i = 0; i < n; i++) 
  	{
    	printf("%d  ", arr[i]);
  	}
  	return 0;
}