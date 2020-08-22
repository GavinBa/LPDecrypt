#include <stdio.h>
#include <string.h>

//Inlcude Page Definitions
#include "../data/runes.h"
#include "../data/0_3.h"

int isPrime(long num)
{
	long num_count;
	for (num_count = 2; num_count <= num / 2; num_count++)
	{
		if (num % num_count == 0)
		{
			return 0;
		}
	}
	return 1;
}

void main(void)
{
	printf("LP Decrypter v0.01\n");

	int c;

//	for (c = 2; c <= 1000000; c++)
//	{
//		if (isPrime(c))
//			//printf("\n%i is prime\n",c);
//			printf("%i ",c);
//		else
//			printf("\n%i is Not prime\n",c);
//	}

}
