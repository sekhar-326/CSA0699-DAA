#include<stdio.h>
int main()
{
	int n,temp,d,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		d=n%10;
		sum=sum+(d*d*d);
		n=n/10;
	}
	if (temp==sum)
	{
		printf("armstrong number");
	}
	else
	{
		printf("not armstrong number");
	}
  return 0;
}