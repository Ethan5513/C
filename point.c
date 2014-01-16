/*	Pointers
	By Mathieu Grenier
*/

#include<stdio.h> // include c fonction library stdio.h

int main() // declare main function
{
	int i,j; //declare i,j as integer numbers
	int *p; // declare p as integer pointer
	i = 5; // sets the value of i to 5
	p = &i; // sets the value of integer i to p
	j = *p; // sets the value of integer j to p
	*p = 7; // sets the value of p to 7
	printf("%i\n", i); // prints the value of integer i to the screen and escape to a new line
	printf("%i\n", j); // prints the value of integer j to the screen and escape to a new line
	printf("%i\n", *p); // prints the value of integer pointer p to the screen and escape to a new line
return 0; // functions should always return 0 at the end
}
