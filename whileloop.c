/* 	While Loops
	By Mathieu Grenier
*/

#include<stdio.h> // include c function library stdio.h

int main() // declare main function
{
	int i, times; // declare i and times as integer numbers
	scanf("%d", &times); // wait for user integer input and stores it in times
	i = 0; // sets the value of i to 0
		while (i <= times); // run loop as long as i is less than or equals to times
			{ // open { to start while loop
				i++; // increments i by 1 each time the loop is run
				printf("%d\n", i); // prints the integer value of i to the screen
			} // close } to end while loop
return 0; // functions should always return 0 at the end
}
