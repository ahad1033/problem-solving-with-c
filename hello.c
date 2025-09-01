#include <stdio.h>

int main()
{
    // printf("Hello World\n");

    // PRINT INTEGER
    int n;
    // n = 5;
    printf("Please enter a number: \n", n);
    scanf("%d", &n);

    printf("%d\n", n);

    /*
    // LONG INT
    long n;
    n = 123456789;
    
    printf("%ld\n", n);
    */
    

    /*
    // LONG LONG INT
    long long n;

    n = 1234567890;

    printf("%d\n", n);
    */

    /*
    // FLOAT
    float n;

    n = 33.99;

    printf("%f\n", n);   // prints 33.990002 // %f prints 6 digits after the decimal
    printf("%.2f\n", n); // prints 33.99
    */

    /*
    // DOUBLE NUMBER
    double n;

    n = 35.6;

    printf("%f\n", n);    // 33.600000
    printf("%.2lf\n", n); // 33.60
    */

    /*
    // CHARACTER
    char n;

    n = 'A';

    printf("%c\n", n);
    */

    /*
    // STRING
    char n[20] = "Hello World";

    printf("%s\n", n);
    */

    return 0;
}