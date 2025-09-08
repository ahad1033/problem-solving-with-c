#include <stdio.h>

int main()
{
    double totalHour;
    double totalSalary;

    printf("Enter total hour you work every month: ");
    scanf("%lf", &totalHour);

    printf("Enter your monthly salary: ");
    scanf("%lf", &totalSalary);

    double salaryPerHour = totalSalary / totalHour;

    printf("Your hourly salary is: %lf", salaryPerHour);

    return 0;
}