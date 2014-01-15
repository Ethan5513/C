/*	Pointers
	By Mathieu Grenier
*/

#include<stdio.h>

int main()
{
	int i,j;	
	int *p;
	i = 5;
	p = &i;
	j = *p; // j = i
	*p = 7; // i = 7
	printf("%i\n", i);
	printf("%i\n", j);
	printf("%i\n", *p);
return 0;
}
