#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divi(int a, int b) { return a / b; }
int mod(int a, int b) { return a % b; }

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Add = %d\n", add(a,b));
    printf("Sub = %d\n", sub(a,b));
    printf("Mul = %d\n", mul(a,b));
    printf("Div = %d\n", divi(a,b));
    printf("Mod = %d\n", mod(a,b));

    return 0;
}
