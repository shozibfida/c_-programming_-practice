#include <stdio.h>
int main()
{
	double num;
	printf("enter a num:");
	scanf("%lf", &num);
	if (num < 0)
	{
		printf("the num is negative. \n");
	}
	else if (num > 0)
	{
		printf("the num is positive. \n");
	}
	else
	{
		printf("the num is zero.");
	}
	
	return 0;
}