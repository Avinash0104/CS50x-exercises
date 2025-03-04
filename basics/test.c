#include <stdio.h>

char AskAQuestion(){
    char reply;
    printf("do you agree? \n");
    scanf("%c", &reply);
    if (reply == 'y'){
        printf("agreed");
        return reply;
    } else if (reply == 'n') {
        printf("disagreed");
        return reply;
    }
}

int main(void){
    printf("You like chocolate. \n");
    AskAQuestion();
}





