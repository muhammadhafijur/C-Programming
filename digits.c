#include<stdio.h>

int main(){

//    int x;
//    scanf("%d", &x);
//
//    int sum = 0;
//    while(x > 0){
//        int digit = x % 10;
//        x /= 10;
//        sum += digit;
//        printf("digit = %d, x = %d\n", digit, x);
//
//    }
//    printf("%d", sum);



     // reversed

     int x;
    scanf("%d", &x);

    int reversed = 0;
    while(x > 0){
        int digit = x % 10;
        x /= 10;
        reversed = reversed * 10 + digit;
    }
    printf("Reversed = %d", reversed);


return 0;
}

/*

1234

4
3
2
1

*/
