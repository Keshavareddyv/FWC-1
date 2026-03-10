#include <stdio.h>
int main()
{
    int i= 1;
    switch(i)
    {
        case 0:
            printf("one");
        case 1:
            printf("two\n");
       default:
            printf("three\n");
            break;
    }
    return 0;
}
