#include<stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    while(a != 0) {
        int rem = b%a;  // 12
        b = a;
        a = rem;
        printf("%d %d\n", a, b);
    }
    printf("gcd = %d\n", b);



    /*
    a   b           remainder
    30  42              12
    12  30              6
    6   12              0
    0   6



    */




return 0;

}

/*

 30 42

 6321
 g <= 30




*/
