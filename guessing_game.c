#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    srand(time(0));
    int hidden = rand()%100 + 1;

    int number_of_guesses = 0;

    while(number_of_guesses < 10){
        int guess;
        scanf("%d", &guess);

        if(guess == hidden){
            printf("You are right\n");
            break;
        }
        else if(guess > hidden){
            printf("Guess smaller\n");
        }
        else{
            printf("Guess larger\n");
        }

        number_of_guesses++;

        if(number_of_guesses == 10){
            printf("You failed");
        }
    }



    return 0;
}
