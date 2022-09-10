#include<stdio.h>

int main(){

    int num;
    scanf("%d", &num);

    if(num < 0){
        num = -num;
    };

    printf("%d\n", num);

    /*
        -15 -> 15
        -10 -> 10
        x = -10

    */



//    int marks;
//    scanf("%d", &marks);
//
//    if(marks >= 40){
//        printf("You have passed");
//    } else {
//        printf("You have failed");
//    }


    return 0;


}
