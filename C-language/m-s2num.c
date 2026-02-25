#include <stdio.h>
int main() {
    int a, b;
    int sum, mul;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    mul = a * b;
    printf("Sum = %d\n", sum);
    printf("Multiplication = %d\n", mul);
    return 0;
}
