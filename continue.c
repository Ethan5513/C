/* 	Continue
	By Mathieu Grenier
*/

#include<stdio.h> // include c function library stdio.h

int main() // declare main function
{
	int i; // declare i as integer number
	while (i < 10) // run loop as long as i is less than 10
		{
			i++; // increment i by 1 each time the loop is run
			continue; // restart the loop process from the beginning
			printf("Hello\n"); // Hello should never get printed to screen
		}
	printf ("%i\n", i); // prints the integer value of i
return 0; // fonctions should always return 0 at the end
}
