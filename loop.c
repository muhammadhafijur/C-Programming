#include<stdio.h>

int main(){
    //    1
    for(int i = 1; i <=5; i++){
        printf("%d\n", i);
    }

    //    2
    for(int i = 1; i <=14; i+=2){
        printf("%d\n", i);
    }
    //    3
    for(int i = 10; i != 1; i--){
        printf("%d\n", i);
    }

    //    4
    for(int i = 1; i != 10; i+=2){
        printf("%d\n", i);
    }  // it will print numbers continously

    //    5
    for(int i = 1; i <= 5; i++){
        printf("%d %d\n", i, 10 - i);
    }

    //    6
    for(int i = 1, j=9; i <= j; i++, j--){
        printf("%d %d\n", i, j);
    }
/*

    1 9
    2 8
    3 7
    4 6
    5 5

*/

        for(; ; ){
            printf("Hello\n");
        }
//       infinite loop








    return 0;
}
