#include <stdio.h>

int main()
{
    int c = getchar() == EOF;

    printf("the expression value is: %d\n", c);
    return 0;
}