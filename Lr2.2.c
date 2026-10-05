#include <stdio.h>

#define NAME_NUMBER 5

int variant_number = 8;

int main() {
    int start = variant_number + NAME_NUMBER;
    int sum = 0;
    int i = start;

    while (i > 1) {
        i--;
        sum += i;
    }

    printf("Константа NAME_NUMBER = %d\n", NAME_NUMBER);
    printf("Початкове значення лічильника = %d\n", start);
    printf("Сума всіх чисел від %d до 1 = %d\n", start - 1, sum);

    return 0;
}