/* 	For Loops
	By Mathieu Grenier
*/

#include<stdio.h> // include c function library stdio.h

int main() // declare main function
{
	int i; // declare i as integer number
	for (i = 1;i <= 24;printf("%i\n",i);i++); // sets i to 1, run loop as long as i is less or equal than 24, increment i by 1 each time the loop is run
		printf("%i\n", i); // prints the value of integer i and escape to a new line
return 0; // functions should always return 0 at the end
}
