/*	String Arrays
	By Mathieu Grenier
*/

#include<stdio.h> // include c function library stdio.h

int main() // declare main function
{
	char ca[10], *sp; //declare the ca character array, declare sp pointer as character
	sp = "Hello"; // sets the value of sp to Hello
	ca[0] = 'H'; // sets the value of ca[0] to H
	ca[1] = 'e'; // sets the value of ca[1] to e
	ca[2] = 'l'; //sets the value of ca[2] to l
	ca[3] = 'l'; // sets the value of ca[3] to l
	ca[4] = 'o'; // sets the value of ca[4] to o
	ca[5] = 0; // sets the value of ca[5] and following members of the array to 0(null)
	printf("%s\n", ca); // prints the value of the whole ca character array to the screen on the same line and escape to a new line
	printf("%s\n", sp); // prints the value of the character pointer sp to the screen and escape to a new line
return 0; // function should always return 0 at the end
}
