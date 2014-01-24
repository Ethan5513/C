#include <stdio.h>
#include <string.h>
int main()
{
	char a[25] = " this is a ";
	char b[25] = " this is b ";
	char c[25] = " we dont care about c ";
	int i,x,y;
printf("\nComparing strings using strcmp\n\n");
printf("%s\n%s\n%s\n", a, b, c);
i = strcmp(b, a);
printf("\na & b comparison = %i\n\n", i);
x = strcmp(a, c);
printf("\na & c comparison = %i\n\n", x);
y = strcmp(a, a);
printf("\na & a comparison = %i\n\n", y);
printf("\nstrcmp did its job\n\n");
return 0;
}
