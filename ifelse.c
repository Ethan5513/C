/*	If/Else
	Description : Using conditions, Simple did you pass test or not
	By Mathieu Grenier
*/

#include<stdio.h> //include header stdio.h

int main() // declare main function
{
int mark; // declare mark as integer number
char pass; // declare pass as character
	scanf("%d",&mark); // wait for user input and stores it in mark
	if (mark > 50) // check if mark is over 50
		{
			pass = 'y'; //stores y in pass
			printf("Level up\n"); // prints Level up to the screen and escape to a new line
		}
	else // if mark is below 50
		{
			pass ='n'; //stores n in pass
			printf("Fail\n"); // prints Fail to the screen and escape to a new line
		}
return 0; // function should always return 0 at the end
}
