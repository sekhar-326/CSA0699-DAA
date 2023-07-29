#include<stdio.h>
int main()
{
	int a[20],m,i,j,n;
	printf("enter the size of array:");
	scanf("%d",&m);
	printf("enter the elements:");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		{
			if(a[i]>a[j])
			{
				n=a[i];
				a[i]=a[j];
				a[j]=n;
			}
		}
	}
	for(i=0;i<m;i++)
	{
		printf("sorted  elements=%d\t",a[i]);	
	}
	return 0;
}