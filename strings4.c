#include <stdio.h>
#include <string.h>
int main()
{
	char a[25] = " this is a ";
	char b[25] = " this is b ";
	char c[25] = " we dont care about c ";
	int i,x,y;
printf("\nChecking string lenght\n\n");
printf("%s\n%s\n%s\n", a, b, c);
i = strlen(a);
printf("\na = %i characters\n\n", i);
x = strlen(b);
printf("\nb = %i characters\n\n", x);
y = strlen(c);
printf("\nc = %i characters\n\n", y);
printf("\nstrlen did its job\n\n");
return 0;
}
