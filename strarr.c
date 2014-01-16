/*	String Arrays
	Description : Very basic string array use
	By Mathieu Grenier
*/

#include<stdio.h> // include header stdio.h

int main() // declare main function
{
	int i;
	char ca[10], *sp; //declare the ca character array, declare sp pointer as character
	i = 0;
	sp = "Hello"; // sets the value of sp to Hello
	ca[0] = 'H'; // sets the value of ca[0] to H
	ca[1] = 'e'; // sets the value of ca[1] to e
	ca[2] = 'l'; //sets the value of ca[2] to l
	ca[3] = 'l'; // sets the value of ca[3] to l
	ca[4] = 'o'; // sets the value of ca[4] to o
	ca[5] = 0; // sets the value of ca[5] and following members of the array to 0(null)
	printf("\n%s\n\n", ca); // prints the value of the whole ca character array to the screen on the same line and escape to a new line
	do // starts loop to print value from integer array a on different lines
	{
	printf("%c\n", ca[i]); // prints the value of the integer i from array a and escape to a new line
	i++;
	}
	while (i <= ca[i]); // run loop as long as integer i is less than or equals to 4
	printf("\n%s\n", sp); // prints the value of the character pointer sp to the screen and escape to a new line
return 0; // function should always return 0 at the end
}
