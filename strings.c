#include <stdio.h>
#include <string.h>
int main()
{
	char a[25] = " this is a ";
	char b[25] = " this is b ";
	char c[25] = " we dont care about c ";
	int i;
printf("\nThose 3 strings will get modified after using strcpy\n\n");
printf("%s\n%s\n%s\n", a, b, c);
printf("\nNow using magic\n\n");
strcpy(c, a);
printf("%s\n %s\n %s\n", a, b, c);
printf("\nstrcpy did its job\n\n");
return 0;
}
