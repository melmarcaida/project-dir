/* MARCAIDA, MELISSA D. DIT 1-2 */
#include <stdio.h>

int main(void) {

    // 🩷 Coffee Order Details
    char drinkName[30];
    int cupsOrdered;
    float pricePerCup;
    float discount = 50.0f;

    printf("Welcome to JCO Cafe!\n");
    printf("-----------------------------\n");

    printf("Enter your drink name: ");
    scanf("%s", drinkName);

    printf("How many cups would you like to order? ");
    scanf("%d", &cupsOrdered);

    printf("Enter price per cup (Php): ");
    scanf("%f", &pricePerCup);

    // 🩷 Arithmetic Operations
    float totalPrice = cupsOrdered * pricePerCup;       
    float finalPrice = totalPrice - discount;          
    float pricePerPerson = finalPrice / cupsOrdered;    
    float tip = finalPrice + 10;                        

    printf("\nYour Coffee Order Summary\n");
    printf("-----------------------------\n");
    printf("Drink: %s\n", drinkName);
    printf("Cups Ordered: %d\n", cupsOrdered);
    printf("Price per Cup: Php %.2f\n", pricePerCup);
    printf("Total Price: Php %.2f\n", totalPrice);
    printf("After Discount: Php %.2f\n", finalPrice);
    printf("Price per Cup After Discount: Php %.2f\n", pricePerPerson);
    printf("Including Tip: Php %.2f\n", tip);

    // 🩷 Coffee Ordering Conditions 🩷
    int cupsAvailable = 3;  
    int isCustomer = 1;        
    int isSpecialDay = 0;    

    printf("\n--- Order Status ---\n");

    // 🩷 Logical Operators
    if (cupsAvailable > 0 && isCustomer) { // and
        printf("You can order your coffee!\n");
    }

    if (cupsAvailable == 0 || isSpecialDay) { // or
        printf("You get a special free coffee!\n");
    }

    if (!isSpecialDay) { // not
        printf("Today is not a special day, but you'll still enjoy your JCoccino!\n");
    }

    printf("\nThank you for ordering at JCO Cafe!\n");

    return 0;
}
