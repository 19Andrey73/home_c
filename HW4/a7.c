#include <stdio.h>

int main(void)
{
	int number1, number2;
	scanf("%d%d", &number1, &number2);
	if (number1 > number2)
	    printf ("%d %d", number2, number1);
	else
	    printf ("%d %d", number1, number2);
	   
	return 0;
}

