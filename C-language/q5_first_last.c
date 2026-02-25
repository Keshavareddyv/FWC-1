//Check if first and last numbers of a list are same


#include <stdio.h>
int main() {
    int n, arr[100], i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if(arr[0] == arr[n-1])
        printf("True");
    else
        printf("False");
    return 0;
}
