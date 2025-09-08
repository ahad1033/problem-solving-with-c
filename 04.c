#include <stdio.h>

int main()
{
    int productPrice;
    int productQuantity;

    printf("Enter your product price: \n");
    scanf("%d", &productPrice);

    printf("Enter your product quantity: \n");
    scanf("%d", &productQuantity);

    int total = productPrice * productQuantity;

    printf("Your total price is: %d", total);

    return 0;
}
