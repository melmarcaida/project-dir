/*MARCAIDA, MELISSA D. DIT 1-2*/
#include <stdio.h>
int main(void) {

    // 🩷 While Loop 
    printf("=== WHILE LOOP ===\n");
    int m = 1;
    while (m <= 10) {
        printf("%d ", m);
        m++;
    }
    printf("\n\n");  

    // 🩷 For Loop 
    printf("=== FOR LOOP ===\n");
    int e;
    for (e = 2; e <= 20; e += 2) {
        printf("%d ", e);
    }
    printf("\n\n");


    // 🩷 Do While Loop 
    printf("=== DO-WHILE LOOP ===\n");
    int l = 1;
    do {
        printf("%d ", l);
        l++;
    } while (l <= 5);
    printf("\n");

    return 0;
}
