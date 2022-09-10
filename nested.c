#include<stdio.h>

int main(){

  int a, b;
  scanf("%d %d", &a, &b);

  if(b != 0){
    printf("Remainder is %d\n", a%b);
    if(a%b == 0){
        printf("%d is divisible by %d", a, b);
    } else {
        printf("%d is not divisible by %d", a, b);
    }
  } else {
    printf("You cannot divide by 0");
  }

  return 0;
}


//6 3 -> 6 is divisible by 3
//8 3 -> 8 is not divisible by 3
//7 0 -> you cannot divide by 0
