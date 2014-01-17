/*	String Arrays
	Description : Very basic string array use
	By Mathieu Grenier
*/

#include<stdio.h> // include header stdio.h

int main() // declare main function
{
	
	int i,o,u,a,b; // declares i o
	char ca[10], *sp; //declare the ca character array, declare sp pointer as character
	i = 0; // sets the value of i to 0
	o = 4; // sets the value of o to 4
	sp = "Hello"; // sets the value of sp to Hello
	ca[0] = 'H'; // sets the value of ca[0] to H
	ca[1] = 'e'; // sets the value of ca[1] to e
	ca[2] = 'l'; //sets the value of ca[2] to l
	ca[3] = 'l'; // sets the value of ca[3] to l
	ca[4] = 'o'; // sets the value of ca[4] to o
	ca[5] = 0; // sets the value of ca[5] and following members of the array to 0(null)
	printf("\n%s\n\n", ca); // prints the value of the whole ca character array to the screen on the same line and escape to a new line
    printf("%c %c %c %c %c\n", ca[0], ca[1],ca[2],ca[3],ca[4]); // prints the value of the character array ca to the screen on the same line
	printf("%c %c %c %c %c\n", ca[4],ca[3],ca[2],ca[1],ca[0]); // prints olleH to the screen to the screen on the same line
	printf("%c %c %c %c %c\n",sp[0], sp[1], sp[2], sp[3], sp[4]);
 	do // starts loop to print value from integer array a on different lines
	{
	printf("%c %c \n", ca[i], ca[o]); // prints the value of the integer i from array a and escape to a new line
	i++; // increments i by 1
	o--;
	}
	while (i <= 4, o >= 0); // run loop as long as integer i is less than or equals to 4
	do
	{
	printf("%c %c \n", ca[o], ca[i]);
	i--;	
	o++;
	}
	while (i >= 0, o <= 4);
	i =0;
	o =4;
	do
	{
	printf("%c %c %c %c %c\n", ca[i], ca[o], ca[u], ca[a], ca[b]);
	i++;
	o--;
	u=rand() % 4;
	a=rand() % 4;
	b=rand() % 4; 
	}
	while ( i <= 4, o >= 0);
	printf("\n%s\n", sp); // prints the value of the character pointer sp to the screen and escape to a new line
return 0; // function should always return 0 at the end
}
