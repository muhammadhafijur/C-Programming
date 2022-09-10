#include<stdio.h>
int main(){

    int a;
    scanf("%d", &a);

    if(a > 0){
        printf("positive");
    }
    else if(a == 0){
        printf("zero");
    }
    else if(a == -1){
        printf("minus 1");
    }
    else{
        printf("negative");
    }



return 0;
}
