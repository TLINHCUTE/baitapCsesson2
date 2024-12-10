#include <stdio.h>

int main() {
    // Kiểu dữ liệu int - Số nguyên
    int a = 10; 
    // Kiểu int dùng để lưu trữ các giá trị số nguyên, không có phần thập phân.
    printf("a = %d\n", a);

    // Kiểu dữ liệu float - Số thực (dạng dấu chấm động)
    float b = 3.14;  
    // Kiểu float dùng để lưu trữ các giá trị số thực, có thể có phần thập phân.
    printf("b = %.2f\n", b); 

    // Kiểu dữ liệu double - Số thực (dạng dấu chấm động với độ chính xác cao hơn float)
    double c = 3.1415926535; 
    // Kiểu double dùng để lưu trữ các giá trị số thực với độ chính xác cao hơn float.
    printf("c = %.10f\n", c);

    // Kiểu dữ liệu char - Ký tự
    char d = 'A';  
    // Kiểu char dùng để lưu trữ một ký tự (một byte).
    printf("d = %c\n", d);

    // Kiểu dữ liệu unsigned int - Số nguyên không dấu
    unsigned int e = 3000; 
    // Kiểu unsigned int lưu trữ các giá trị số nguyên không âm (chỉ số dương và 0).
    printf("e = %u\n", e); 
    // Kiểu dữ liệu long - Số nguyên dài
    long f = 1000000000; 
    // Kiểu long dùng để lưu trữ các số nguyên lớn hơn kiểu int.
    printf("f = %ld\n", f); 

    // Kiểu dữ liệu short - Số nguyên ngắn
    short g = 300;  
    // Kiểu short lưu trữ các giá trị số nguyên trong phạm vi nhỏ hơn kiểu int.
    printf("g = %d\n", g); 

    // Kiểu dữ liệu _Bool - Kiểu logic (True/False)
    _Bool h = 1;  
    // Kiểu _Bool chỉ có 2 giá trị: 1 (True) hoặc 0 (False).
    printf("h = %d\n", h); 

    return 0;
}
