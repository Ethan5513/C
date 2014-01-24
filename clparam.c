#include <stdio.h>
int main(int argc, char *argv[])
{
int i;
printf("Amount: %d\n", argc);
	if (argc > 0)
		{
		printf("Parameters:");
		for (i = 1; i < argc; i++)
		printf("%s\n", argv[i]);
		}
return 0;
}
