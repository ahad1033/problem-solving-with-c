#include <stdio.h>

int main()
{
    // AREA OF CIRCLE
    double r, A;
    double pi = 3.141592653589793;

    printf("Enter the radious of your circle: \n");
    scanf("%lf", &r);

    A = pi * r * r;

    //  %.nf => to print n number of digit after decimal.
    printf("Your circle area is: %.4lf\n", A);

    return 0;
}