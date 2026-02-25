#include <stdio.h>
int main() {
    int current = 1;
    int previous = 0;
    while(current <= 5) {
        printf("Current: %d, Previous: %d, Sum: %d\n",
               current, previous, current + previous);
        previous = current;
        current++;
    }
    return 0;
}


