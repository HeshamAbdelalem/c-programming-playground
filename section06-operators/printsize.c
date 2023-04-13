#include <stdio.h>

int main()
{
    int a = 65345354;

    printf("the size of char is %lu\n", sizeof(char));
    printf("the size of int is %zd\n", sizeof(a));
    printf("the size of long is %lu\n", sizeof(long));
    printf("the size of long long is %lu\n", sizeof(long long));
    printf("the size of double is %lu\n", sizeof(double));
    printf("the size of long double is %lu\n", sizeof(long double));

    return 0;
}