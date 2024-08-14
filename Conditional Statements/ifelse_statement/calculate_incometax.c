// Calculate income tax paid by an employee to the government as per the salary mentioned below:
//  2.5 – 5.0L 5%
//  5.0L - 10.0L 20%
//  Above 10.0L 30%
// Note that there is no tax below 2.5L. Take income amount as an input from the user.

#include <stdio.h>

int main()
{
    float salary;
    printf("Enter your annual salary (enter in number) = ");
    scanf("%f", &salary);
    if (salary < 2.5)
    {
        printf("No tax applicable.\n");
    };
    if (salary >= 2.5 && salary <= 5.0)
    {
        printf("Please pay 5%% tax");
    };
    if (salary >= 5.0 && salary <= 10.0)
    {
        printf("Please pay 20%% tax");
    };
    if (salary >= 10.0)
    {
        printf("Please pay 30%% tax");
    };

    return 0;
}