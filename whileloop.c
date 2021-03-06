/* 	While Loops
	Description : Prints user input to the screen using a while loop
	By Mathieu Grenier
*/

#include<stdio.h> // include header stdio.h

int main() // declare main function
{
	int i, times; // declare i and times as integer numbers
		scanf("%d", &times); // stores user input in times
	i = 0; // sets the value of i to 0
while (i++, !(i >= times)); // increment i by 1, run loop as long as i is less than or equals to times
	{ // open { to start while loop
		printf("%d\n", i); // prints the integer value of i to the screen
	} // close } to end while loop
return 0; // functions should always return 0 at the end
}
