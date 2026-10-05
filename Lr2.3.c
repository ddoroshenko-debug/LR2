#include <stdio.h>
#include <math.h>
#include <string.h>

void check_sqrt(int group_number) {
    char name[] = "Даніл";
    int sum = 78;
    int product = 8 * 78;

    double sq = sqrt(group_number);
    int name_len = strlen(name);

    printf("sqrt(%d) = %.3f, довжина імені = %d\n", group_number, sq, name_len);

    if (sq > name_len) {
        printf("Сума: %ds\n", sum);
    } else if (sq < name_len) {
        printf("Добуток: %dn\n", product);
    } else {
        printf("Сума: %ds\n", sum);
        printf("Добуток: %dn\n", product);
    }
}

int main() {
    check_sqrt(80);
    return 0;
}