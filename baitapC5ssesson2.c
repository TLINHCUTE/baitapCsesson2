#include <stdio.h>

int main() {
    float length = 8.0;  
    float width = 5.0;   

    float perimeter, area;

    perimeter = 2 * (length + width);

    area = length * width;

    printf("Chiều dài hình chữ nhật: %.2f\n", length);
    printf("Chiều rộng hình chữ nhật: %.2f\n", width);
    printf("Chu vi của hình chữ nhật: %.2f\n", perimeter);
    printf("Diện tích của hình chữ nhật: %.2f\n", area);

    return 0;
}
