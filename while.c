#include<stdio.h>

int main(){

//    int count = 1;
//    while(count < 10){
//        printf("%d\n", count);
//        count++;
//    }

    int money = 0;
    while(money < 100){
        int input;
        scanf("%d", &input);
        money = money + input;
        printf("Current money: %d\n", money);
        if(money > 100){
            money = 100;
        }
    }
    printf("Your money is 100\n");
    printf("%d", money);


return 0;
}

/*
    while(condition){
        statement;
    }


*/
