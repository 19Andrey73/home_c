#include <stdio.h>

int main(void)
{
	int number, digit1, digit2, digit3, max;
	scanf("%d", &number);
	digit1= number / 100;
	digit2= (number / 10) % 10;
	digit3= number % 10;
	max = (digit1 > digit2) ? digit1 : digit2;
	max = (max > digit3) ? max : digit3;
	printf ("%d",max);
	return 0;
}


