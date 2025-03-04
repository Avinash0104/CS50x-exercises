#include <stdio.h>

float discount(float price, int percentage){
    return price * ((100-percentage)/100);
}

int main(void){
    float regular;
    int percent_off;
    printf("Regular price: $");
    scanf("%f", &regular);
    printf("Percentage off: ");
    scanf("%i", &percent_off);
    float sale = discount(regular, percent_off);
    printf("Sale price: $%.2f\n", sale);
}

