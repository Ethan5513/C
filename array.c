/*	Arrays
	By Mathieu Grenier
*/

#include<stdio.h> // include c function library stdio.h

int main() // declare main function
{
	int i; // declare i as integer number
	int a[5]; // declare an array of 5 integers in a
	a[0] = 12; // sets the value of a[0] to 12
	a[1] = 23; // sets the value of a[1] to 23
	a[2] = 34; // sets the value of a[2] to 34
	a[3] = 45; // sets the value of a[3] to 45
	a[4] = 56; // sets the value of a[4] to 56
	printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]); // prints the value of the whole a array to the screen, on the same line
	do // starts loop to print value from integer array a on different lines
	{
	printf("%d\n", a[i]); // prints the value of the integer i from array a and escape to a new line
	i++; // increment i by 1
	}
	while (i <= 4); // run loop as long as integer i is less than or equals to 4
return 0; // function should always return 0 at the end
}
