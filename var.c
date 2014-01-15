/*	Basic variable implémentation C
	By : Mathieu Grenier
*/
#include<stdio.h>
int main()
{
int a, c;
signed int d;
unsigned int e;
char b;
const float pi = 3.14;
a = 5;
printf("%d\n",a);
b = 'H';
c = a + 3;
a = a - 3;
printf("%d\n",a);
printf("%lf\n",pi);
printf("%c\n",b);
printf("%d\n",c);
return 0;
}
