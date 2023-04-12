/*
 ** code by Hesham Abdelalem
 ***** demonstration of c programming for beginners
 ** Section: 6
 ** Lecture: #40
 *****# what does the code do?
 ** gets a minutes from user and convert it to hours, days and years
 */

#include <stdio.h>

int main()
{
    // i decided to assign the var to double cuz when i do it as int the results
    // will be tricky and not right
    double minutes, hours, days, years;

    printf("Please Enter the minutes: \n");
    scanf("%lf", &minutes);

    hours = minutes / 60;
    days = hours / 24;

    printf("you have entered : %.2lf minutes\n", minutes);
    printf("you have entered : %.2lf hours\n", hours);
    printf("you have entered : %.2lf days\n", days);

    return 0;
}