#include <stdio.h>
#include<math.h>
int main ()
{
  	int n, c = 0, num = 2, i, l= 0;
  	printf ("Enter Nth Number\n");
  	scanf ("%d", &n);

  	while (c != n)
    {
      	int count = 0;
      	for (i = 2; i <= sqrt (num); i++)
 		{
   			if (num % i == 0)
     		{
       			count++;
       			break;
     		}
 		}
      	if (count == 0)
 		{
   			c++;
   			l = num;
 		}
      	num = num + 1;
    }
  	printf ("%dth prime number is %d ",n,l);
  	return 0;
}