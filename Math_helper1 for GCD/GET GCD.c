#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//Choose the option which you want to use. Then note the other one to keep the program run.
// The second one is more efficient but the difference is extremely subtle.
//Option 1:
//求最大公约数。
int main()
{
	int a = 0, b = 0, c = 0;
	scanf("%d %d", &a, &b);//Plz type in the numbers which you are looking for their GCD.
	if (a < b)
		c = b;
	else
		c = a;
	while (1)
	{
		if (a % c == 0 && b % c == 0)
		{
			printf("%d\n", c);//Here is the answer will show.
			break;
		}
		c--;
	}
	return 0;
}

//Option 2:
//辗转相除法：
int main()
{
	int a = 0, b = 0;
	scanf("%d %d", &a, &b); 
	int c = 0;
	while (a % b)
	{
		c = a % b;
		a = b;
		b = c;
	}
	printf("%d", c);//Here is the answer will show.
	return 0;
}
