//Print the sum of a current number and a previous number

#include <stdio.h>
int main() {
    int n, current = 1, previous = 0;
    printf("Enter limit: ");
    scanf("%d", &n);
    while(current <= n) {
        printf("Current: %d, Previous: %d, Sum: %d\n",
               current, previous, current + previous);
        previous = current;
        current++;
    }
    return 0;
}
