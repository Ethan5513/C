/*	String Arrays
	By Mathieu Grenier
*/

#include<stdio.h>

int main()
{
	char ca[10], *sp;
	sp = "Hello";
	ca[0] = 'H';
	ca[1] = 'e';
	ca[2] = 'l';
	ca[3] = 'l';
	ca[4] = 'o';
	ca[5] = 0;
	printf("%s\n", ca);
	printf("%s\n", sp);
return 0;
}
