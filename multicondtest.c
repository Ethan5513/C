/*	Multi-conditions test
	By Mathieu Grenier
*/

#include<stdio.h>

int main()
{
int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
		if (a >= 0 && b >= 0)
			printf("Both numbers are positive\n");
		if (a == 0 || b == 0)
			printf("At least 1 number is 0\n");
		if (!(a >= 0) && !(b >= 0))
			printf("Both numbers are negative\n");
		if (!(a == b) && !(b == a))
			printf("Those are some random numbers\n");
return 0;
}
