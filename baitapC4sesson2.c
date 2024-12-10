#include <stdio.h>

int main() {
    float side = 5.0;  

    float perimeter, area;

    perimeter = 4 * side;

    area = side * side;

    printf("Cạnh hình vuông: %.2f\n", side);
    printf("Chu vi của hình vuông: %.2f\n", perimeter);
    printf("Diện tích của hình vuông: %.2f\n", area);

    return 0;
}
