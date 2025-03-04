#include <stdio.h>
// functions
void meow(int n){
    for (int i = 0; i < n; i++){
        printf("meow\n");
    }
}

int main(void){
    meow(12);
}
