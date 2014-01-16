/*	String Arrays
	By Mathieu Grenier
*/

#include<stdio.h> // include c function library stdio.h

int main() // declare main function
{
	char ca[10], *sp; // declare character array ca and character pointer sp
	scanf("%s", ca); // wait for user input and stores it in character array ca
	sp = ca; // sets the value of character array ca to character pointer sp
	printf("%s\n", sp); // prints the value of character pointer sp to the screen and escape to a new line
return 0; // function should always return 0 at the end
}
