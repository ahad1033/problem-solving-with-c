#include <stdio.h>

int main()
{
    // READ AND PRINT ANY LINE
    char n[100];

    printf("Enter your text to print! \n");
    fgets(n, sizeof(n), stdin);

    printf("You typed: %s\n", n);

    return 0;

    return 0;
}