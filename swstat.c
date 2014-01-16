/*	Switch statement
	By Mathieu Grenier
*/

#include<stdio.h> // include c function library stdio.h

int main() // declare main function
{
char fruit; // declare fruit as character
	printf("Which one is your favorite fruit :\n");
	printf("a) Apples\n");
	printf("b) Bananas\n");
	printf("c) Cherries\n");
	scanf("%c",&fruit); // wait for user char input and stores it in fruit
		switch (fruit) // Switch statement, basically another kind of if statement
			{ // open { to start case
				case 'a': // if user input a
					printf("You like Apples\n");
				break; // end if
				case 'b': // if user input b
					printf("You like Bananas\n");
				break; // end if
				case 'c': // if user input c
					printf("You like Cherries\n");
				break; // end if
			} // close } to end case
return 0; // functions should always return 0 at the end
}
