#include <stdio.h>

unsigned long long grains_on_cell(int n) {
	
    if (n <= 0) {
        return 0;
    }
    
    unsigned long long grains = 1;

    for (int i = 2; i <= n; i++) {
        grains *= 2;
    }
    
    return grains;
}

int main() {
	int cell_number;
    scanf("%d", &cell_number);
    unsigned long long grains1 = grains_on_cell(cell_number);
    printf("%llu", grains1);
    return 0;
}
