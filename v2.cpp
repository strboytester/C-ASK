#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int complexCalculation(int x, int y, int z) {
    int result1 = sum(x, y);
    int result2 = multiply(result1, z);
    return result2;
}

int main() {
    int a = 5, b = 3, c = 2;
    
    int result = complexCalculation(a, b, c);
    
    printf("ผลลัพธ์: %d\n", result);
    
    return 0;
}
