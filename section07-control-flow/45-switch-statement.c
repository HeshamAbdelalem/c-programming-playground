#include <stdio.h>

int main()
{
    float num1, num2;
    char useroperator;

    printf("Plz enter the desired num and operator and num:\n");
    scanf("%f", &num1);
    scanf("%c", &useroperator);
    scanf("%f", &num2);

    printf("%.2f %c %.2f \n", num1, useroperator, num2);

    switch (useroperator)
    {
    case '+':
        printf("%.2f\n", num1 + num2);
        break;
    case '-':
        printf("%.2f\n", num1 - num2);
        break;
    case '*':
        printf("%2.f\n", num1 * num2);
        break;
    case '/':
        printf("%.2f\n", num1 / num2);
        break;
    }

    return 0;
}