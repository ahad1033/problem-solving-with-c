#include <stdio.h>

int main()
{

    int a, b;

    int x;

    printf("Enter two number: \n");

    // & => ADDRESS OF OPERATOR
    scanf("%d %d", &a, &b);

    x = a + b;

    printf("X = %d\n", x);

    return 0;
}