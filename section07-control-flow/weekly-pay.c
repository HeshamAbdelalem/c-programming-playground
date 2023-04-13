#include <stdio.h>
#define PAYRATE 12.00
#define TAXRATE_300 0.15
#define TAXRATE_150 0.20
#define TAXRATE_REST 0.25
#define REGULARWORKTIME 40.00

int main() {
    float userWorkWeekly;
    float fullSalary;
    float taxPaid;
    float netSalary;

    
    printf("Please Enter Your Weekly Work Hours: \n");
    scanf("%f", &userWorkWeekly);
    //printf("user work weekly: %.2f\n", userWorkWeekly);

    //if the work hours <= 40
    fullSalary = userWorkWeekly * PAYRATE;
        printf("fullSalary: %.2f\n",fullSalary);    
        if (fullSalary > 450) {
            taxPaid = ( (fullSalary - 450) * TAXRATE_REST) + 30 + 45; // 300 * 0.15 = 45 && 150 * 0.20 = 30
            printf("taxpaid300&150&rest: %.2f\n", taxPaid);
            netSalary = fullSalary - taxPaid;
            printf(":::::: NET SALARY :::::: ===> %.2f\n", netSalary);
        } else if (fullSalary <= 450 && fullSalary > 300) {
            taxPaid = ((fullSalary - 300) * TAXRATE_150) + 45;
            printf("taxpaid300&150: %.2f\n", taxPaid);
            netSalary = fullSalary-taxPaid;
            printf("::::NET SALARY:::: ==> %.2f\n",netSalary );
        }else if(fullSalary <= 300){
            taxPaid = fullSalary * TAXRATE_300;
            netSalary = fullSalary - taxPaid;
            printf("taxpaid300: %.2f\n", taxPaid);
            printf("::NET SALARY::: => %.2f\n", netSalary);
        }
/*
    if(userWorkWeekly <= REGULARWORKTIME) {
        fullSalary = userWorkWeekly * PAYRATE;
        printf("fullSalary: %.2f\n",fullSalary);

        if(fullSalary <= 300){
            taxPaid = fullSalary * TAXRATE_300;
            netSalary = fullSalary - taxPaid;
            printf("taxpaid300: %.2f\n", taxPaid);
            printf("::NET SALARY::: => %.2f\n", netSalary);
        }else if (fullSalary <= 450) {
            taxPaid = ((fullSalary - 300) * TAXRATE_150) + 45;
            printf("taxpaid300&150: %.2f\n", taxPaid);
            netSalary = fullSalary-taxPaid;
            printf("::::NET SALARY:::: ==> %.2f\n",netSalary );
        }else if (fullSalary > 450) {
            taxPaid = ( (fullSalary - 450) * TAXRATE_REST) + 30 + 45;
            printf("taxpaid300&150&rest: %.2f\n", taxPaid);
            netSalary = fullSalary - taxPaid;
            printf(":::::: NET SALARY :::::: ===> %.2f\n", netSalary);
        } else {
            return 0;
        }
    } else {
        return 0;
    }
    */
    return 0;
}