#include<stdio.h>
int main()
{
	int rows, i, j;
	int count=0;
	printf("Enter the number of rows: ");
	scanf("%d",&rows);
	for(i = 1; i <= rows; i++)
	{
		
		for(j = rows; j > i; j--)
		{		
		    
			printf(" ");
			count++;
		}
		
		for(j = 1; j <= i; j++)
		{
			
			printf("%d ",j);
			count++;
		}
		printf("\n");	
	}
	   printf("Time complexity:%d",count);
	return 0;
}
