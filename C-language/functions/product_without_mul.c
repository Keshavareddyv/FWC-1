#include <stdio.h>

int product(int a, int b) {
    int result = 0;
    for(int i=0; i<b; i++)
        result += a;
    return result;
}

int main() {
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    printf("Product = %d\n", product(a,b));
    return 0;
}
