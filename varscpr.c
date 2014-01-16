/* 	scanf & printf
	By : Mathieu Grenier
*/
#include<stdio.h> // include c function library stdio. h
int main() // declare main function
{
int a; // declare a as integer number
scanf("%d",&a); //wait for user input and stores it in a
a = a * 2; // multiply a by 2 and stores it in a
printf("The awnser is %d\n",a); //prints The awnser is (value of a) to the screen
return 0; // function should always return 0 at the end
}
