#include <stdio.h>
// loop forever
int main(void){
    int n;
    while (1){
        printf("number: ");
        scanf("%i", &n);
        if (n < 0){
            break;
        }
    }
}