#include <stdio.h>
int add(int *a, int *b)
{
return *a + *b;
}
int main()
{
int awnser;
int a = 5;
int b = 7;
awnser = add(&a, &b);
printf("\nawnser is %i\n", awnser);
return 0;
}
