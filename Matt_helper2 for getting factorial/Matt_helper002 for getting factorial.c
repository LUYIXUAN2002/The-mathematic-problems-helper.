#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//This program is aiming for helping us get the factorial fot the singal number.
int main()
{
	int a = 0, b = 0, c = 1;
	printf("Plz typing in a number which you want to know it's factorial: \n");
	scanf("%d", &a);
	for (b = 1; b <= a; b++)
	{
		c *= b;
	}
	printf("The factorial of %d is : %d.", a,c);
	return 0;
}
