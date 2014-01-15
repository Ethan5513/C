/*	Initializing an array
	By Mathieu Grenier
*/

#include<stdio.h>

int main()
{
	int i;	
	int a[5];
	for (i = 0; i < 5; i++)
	a[i] = 0;
	printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	return 0;
}
