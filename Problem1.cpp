#include <stdio.h>

/*PROBLEM: If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.*/

int main()
{
	unsigned int sum=0;
	
	for(unsigned int n=0; n<1000; n++)
	{
		if(n%3==0 || n%5==0)
		{
			sum+=n;
		}
	}
	
	printf("%d\n",sum);
return 0;
}
