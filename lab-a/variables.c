/*MARCAIDA, MELISSA D. DIT 1-2*/
#include <stdio.h>
int main(void) {

    // 🩷 Declaring Variables
    char drinkName[] = "JCoccino";
    int cupsOrdered = 2;
    float price = 195.0f;                    
    char size[] = "Tall"; 

    printf("Your Coffee for Today!\n");
    printf("\nDrink: %s\n", drinkName);
    printf("Cups Ordered: %d\n", cupsOrdered);
    printf("Price for Each: Php %.2f\n", price);
    printf("Size: %s\n", size);

    return 0;
}
