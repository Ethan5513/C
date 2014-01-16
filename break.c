/* 	Breaks
	By Mathieu Grenier
*/

#include<stdio.h> // include c function library stdio.h

int main() // declare main function
{
	int i; // declare i as an integer number
	while (i < 10) // run loop as long as i is less than 10
		{
			i++; // increment i by 1 each time the loop is run
			if (i == 5) // check if the value of i equals 5
			break; // end current loop
		}
	printf ("%i\n", i); // prints the integer value of i to the screen
return 0; // function should always return 0 at the end
}
