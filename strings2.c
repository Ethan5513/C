#include <stdio.h>
#include <string.h>
int main()
{
	char a[25] = " this is a ";
	char b[25] = " this is b ";
	char c[25] = " we dont care about c ";
	int i;
printf("\nThose 3 strings will get modified after using strcat\n\n");
printf("%s\n%s\n%s\n", a, b, c);
printf("\nNow using magic\n\n");
strcat(c, a);
printf("%s\n %s\n %s\n", a, b, c);
strcat(b, c);
printf("\n%s\n %s\n %s\n", a, b, c);
printf("\nstrcat did its job\n\n");
return 0;
}
