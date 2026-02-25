//Display numbers divisible by 5


#include <stdio.h>
int main() {
    int n, i;
    printf("Enter limit: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        if(i % 5 == 0)
            printf("%d ", i);
    }
    return 0;
}
