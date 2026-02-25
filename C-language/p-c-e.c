#include <stdio.h>
int main() {
    char str[] = "Programming";
    int i;
    for(i = 0; str[i] != '\0'; i += 2) {
        printf("%c ", str[i]);
    }
    return 0;
}
