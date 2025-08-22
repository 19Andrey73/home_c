#include <stdio.h>

int modul(int number) {
    if (number < 0) {
        return -number;
    }
    return number;
}

int main() {
	int num;
	scanf("%d", &num);
    printf("%d", modul(num));
    return 0;
}
