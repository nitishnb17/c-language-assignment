#include <stdio.h>

int main() {
    int unit;
    float amount = 0, surcharge = 0;

    printf("Enter number of units consumed: ");
    scanf("%d", &unit);

    if (unit <= 100) {
        amount = unit * 3;
    } 
    else if (unit <= 300) {
        amount = (100 * 3) + (unit - 100) * 5;
    } 
    else if (unit <= 500) {
        amount = (100 * 3) + (200 * 5) + (unit - 300) * 7;
    } 
    else {
        amount = (100 * 3) + (200 * 5) + (200 * 7) + (unit - 500) * 10;
    }


    surcharge = 250;  

    amount = amount + surcharge;

    printf("The electricity bill is Rs. %.2f", amount);

    return 0;
}
