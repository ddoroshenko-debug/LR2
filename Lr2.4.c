#include <stdio.h>

int main() {
    int group;
    printf("Введіть номер групи: ");
    scanf("%d", &group);

    switch (group) {
        case 92: case 93: case 94: case 95:
        case 96: case 97: case 98: case 99:
            printf("Група %d навчається на I курсі\n", group);
            break;

        case 87: case 88: case 89:
        case 90: case 91:
            printf("Група %d навчається на II курсі\n", group);
            break;

        case 81: case 82: case 83:
        case 84: case 85: case 86:
            printf("Група %d навчається на III курсі\n", group);
            break;

        case 75: case 76: case 77:
        case 78: case 79: case 80:
            printf("Група %d навчається на IV курсі\n", group);
            break;

        default:
            printf("Групу %d не знайдено\n", group);
            break;
    }

    return 0;
}