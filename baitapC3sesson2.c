#include <stdio.h>

int main() {
   
    int num1 = 10;
    int num2 = 20;

    int sum, difference, product, quotient;

    sum = num1 + num2;

    difference = num1 - num2;

    product = num1 * num2;

    if (num2 != 0) {
        quotient = num1 / num2;
    } else {
        quotient = 0;  
    }

    printf("Tổng của %d và %d là: %d\n", num1, num2, sum);
    printf("Hiệu của %d và %d là: %d\n", num1, num2, difference);
    printf("Tích của %d và %d là: %d\n", num1, num2, product);
    printf("Thương của %d và %d là: %d\n", num1, num2, quotient);

    return 0;
}
