/*	If/Else
	By Mathieu Grenier
*/

#include<stdio.h> //include c fonction library stdio.h

int main() // declare main function
{
int mark; // declare mark as integer number
char pass; // declare pass as character
	scanf("%d",&mark); // wait for user input and stores it in mark
	if (mark > 40) // check if mark is over 40
		{
			pass = 'y'; //stores y in pass
			printf("Level up\n"); // prints Level up to the screen and escape to a new line
		}
	else // if mark is below 40
		{
			pass ='n'; //stores n in pass
			printf("Fail\n"); // prints Fail to the screen and escape to a new line
		}
return 0; // function should always return 0 at the end
}
