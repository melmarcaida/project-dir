/*MARCAIDA, MELISSA D. DIT 1-2*/
#include <stdio.h>
int main(void) {

    // 🩷 Using if-else Statements
    int number;
    char choice; 

    do {
        printf("Enter a number pls: ");
        scanf("%d", &number);

        if (number % 2 == 0) {
            printf("%d is even.\n", number);
        } else {
            printf("%d is odd.\n", number);
        }
        
        printf("\nWould you like to enter another number (yes po or no po)? (y/n): ");
        scanf(" %c", &choice); 

    } while (choice == 'y' || choice == 'Y'); 

    printf("\nSure, No prob!\n");

    return 0;
}