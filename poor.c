#include <stdio.h>

int main() {
    // // Solving Poor in 2 ways
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a == b && b == c){
        printf("NO");
    }
    else if(a == b && b != c || b == c && c != a || c == a && a != b){
        printf("Yes");
    } else {
        printf("NO");
    }

    // second way
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a == b && b == c){
        printf("NO");
    }
    else if(a != b && a != c && b != c ){
        printf("NO");
    } else {
        printf("Yes");
    }
}

// if 3 number same print NO
// if 3 number not same print NO
// if 2 number same and 1 different then print yes

// 4 4 4 ----> No
// 6 3 8 ----> No
// 8 4 8 ----> Yes

