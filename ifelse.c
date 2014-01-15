/*	If/Else
	By Mathieu Grenier
*/

#include<stdio.h>

int main()
{
int mark;
char pass;
	scanf("%d",&mark);
	if (mark > 40)
		{
			pass = 'y';
			printf("Level up\n");
		}
	else
		{
			pass ='n';
			printf("Fail\n");
		}
return 0;
}
