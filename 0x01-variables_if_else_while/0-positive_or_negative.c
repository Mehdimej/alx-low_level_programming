#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX /2;

	if(n<0)
		printf("%d rah NEGATIVE",n);
	else if(n>0)
		printf("%d rah posiftve",n);
	else printf ("%d = 0",n);
	return (0);
}
