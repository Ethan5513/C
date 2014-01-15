/*	Switch statement
	By Mathieu Grenier
*/

#include<stdio.h>

int main()
{
char fruit;
	printf("Which one is your favorite fruit :\n");
	printf("a) Apples\n");
	printf("b) Bananas\n");
	printf("c) Cherries\n");
	scanf("%c",&fruit);
		switch (fruit)
			{
				case 'a':
					printf("You like Apples\n");
				break;
				case 'b':
					printf("You like Bananas\n");
				break;
				case 'c':
					printf("You like Cherries\n");
				break;
			}
return 0;
}
