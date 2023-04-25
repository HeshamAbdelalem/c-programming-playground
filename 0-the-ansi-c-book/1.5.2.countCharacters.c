#include <stdio.h>

int main()
{
    int c = getchar();
    int d = (getchar() != EOF);

    printf("c:%d === d:%d \n", c, d);
}
