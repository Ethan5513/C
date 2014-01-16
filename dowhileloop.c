/* 	Do While Loops
	By Mathieu Grenier
*/

#include<stdio.h> // include c function library stdio.h

int main() // declare main function
{
	int i, times; // declare i and times as integer numbers
	scanf("%d", &times); // wait for user integer input and stores it in times
	i = 0; // sets the value of i to 0
		do // run loop
			{ // open { to start loop
				i++; // increment i by 1 each time the loop is run
				printf("%d\n", i); // prints the value of integer i to the screen and escapes to a new line
			} // close } to end loop
		while (i <= times); // run loop as long as i is less than or equals to times
return 0; // functions should always return 0 at the end
}
