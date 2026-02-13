#include <stdio.h>

void main()
{
    int BP,HRA,TA,PT,net_salary;

    printf("PLease enter basic salary: \n");
    scanf("%d", &BP);

    HRA = BP * 0.1;
    TA= BP * 0.05;
    PT = BP * 0.02;

    net_salary = BP + HRA + TA - PT;

    printf("The net salary is: %d" , net_salary);
}