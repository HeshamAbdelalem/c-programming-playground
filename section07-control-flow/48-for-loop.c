#include <stdio.h>

int main()
{
    int count, sum;

    printf("Enter the number of integers you want sum: \n");
    scanf("%d", &count);

    for (int i = 1; i <= count; i++)
    {
        sum += i;
        printf("your sum :%i\n", sum);
    }
}