#include <stdio.h>
#include <math.h>
#include <string.h>

int group_number = 80;
int variant_number = 8;

int main() {
    
    char name[] = "Даніл";
    printf("Група: %d, Варіант: %d, Ім'я: %s\n", group_number, variant_number, name);

    double result = variant_number * 3.14;
    
    int result_int = (int)result;
    printf("Результат добутку: %f, Після конвертації у int: %d\n", result, result_int);

    return 0;
}