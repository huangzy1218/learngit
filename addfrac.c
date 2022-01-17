/***********************************************
* Name: addfrac.c                              *
* Purpose: Add two fractions.                  *
* Author: Huang Zhengyang                      *
***********************************************/

#include <stdio.h>
int get_gcd(int, int);

int main()
{
	int num1, denom1, num2, denom2;
	int result_num, result_denom;
	int gcd;
	
	printf("Enter first fraction: ");
	scanf("%d/%d", &num1, &denom1);
	
	printf("Enter second fraction: ");
	scanf("%d/%d", &num2, &denom2);              /*use '/' to limit input*/
	
	result_num   = num1 * denom2 + num2 * denom1;
	result_denom = denom1 * denom2;
	
	gcd = get_gcd(result_num, result_denom);
	
	result_num   /= gcd;
	result_denom /= gcd;
	printf("%d", gcd);
	
	printf("The sum is %d/%d\n", result_num, result_denom);
	
	return 0;
}

/*Find the greatest common divisor*/
int get_gcd(int a, int b)
{
	return a % b ? get_gcd(b, a % b) : b;
}
