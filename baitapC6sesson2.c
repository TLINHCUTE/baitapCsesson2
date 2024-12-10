#include <stdio.h>

int main() {
    const float PI = 3.14;  
   
    float radius = 5.0;  
    
    float circumference, area;

    circumference = 2 * PI * radius;

    area = PI * radius * radius;

    printf("Bán kính hình tròn: %.2f\n", radius);
    printf("Chu vi của hình tròn: %.2f\n", circumference);
    printf("Diện tích của hình tròn: %.2f\n", area);

    return 0;
}
