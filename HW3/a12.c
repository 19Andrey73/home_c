#include <stdio.h>

int main(void)
{
	int number, digit1, digit2, digit3, summ;
	scanf("%d", &number);
	digit1= number / 100;
	digit2= (number / 10) % 10;
	digit3= number % 10;
	summ = digit1 + digit2 + digit3;
	printf ("%d",summ);
	return 0;
}
