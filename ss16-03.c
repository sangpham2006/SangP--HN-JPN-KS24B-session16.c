#include <stdio.h>

void sum(int num1, int num2, int *result) {
    *result = num1 + num2;  
}

int main() {

    int num1 = 31, num2 = 20;
    int result;
    
    sum(num1, num2, &result);
    printf("Tong cua %d va %d la: %d\n", num1, num2, result);

    return 0;
}

