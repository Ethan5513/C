/*	Arrays
	By Mathieu Grenier
*/

#include<stdio.h>

int main()
{
	int i;
	int a[5];
	a[0] = 12;
	a[1] = 23;
	a[2] = 34;
	a[3] = 45;
	a[4] = 56;
	printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	do
	{
	printf("%d\n", a[i]);
	i++;
	}
	while (i <= 4);
return 0;
}
