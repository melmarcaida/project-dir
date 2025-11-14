/*MARCAIDA, MELISSA D. DIT 1-2*/
#include <stdio.h>
int main(void) {
    int cupsOrdered = 2;
    float pricePerCup = 195.0f;
    float totalPrice = 0.0f;
    float totalPay = 1000.0f;

    // 🩷Assignment Operators
    printf("Initial total price: Php %.2f\n", totalPrice);

    totalPrice = cupsOrdered * pricePerCup;
    printf("Total price for your cups: Php %.2f\n", totalPrice);

    printf("We received: Php %.2f\n", totalPay);

    totalPrice /= cupsOrdered; 
    printf("\nPrice per cup: Php %.2f\n", totalPrice);

    totalPrice += 10.0f;  
    printf("After adding tip, that's: Php %.2f\n", totalPrice);

    totalPrice -= 50.0f;  
    printf("Congrats, you do have a discount of Php 50!!: Php %.2f\n", totalPrice);

    totalPrice *= 2;   
    printf("Your updated total for two cups: Php %.2f\n", totalPrice);

    totalPay -= totalPrice; 
    printf("And here's your change. Thanks mwa!: Php %.2f\n", totalPay);

    return 0;
}
