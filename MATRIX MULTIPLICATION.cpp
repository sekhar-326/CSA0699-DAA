#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,m,n,k;
	printf("enter the size of matrix:");
	scanf("%d",&m);
	printf("enter the first matrix elements:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the size of matrix:");
	scanf("%d",&n);
	printf("enter the second matrix elements:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];	
			}
			printf("%d \t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}