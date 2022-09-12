#include<stdio.h>

// multiplication chart

int main(){

  int n = 10;

  for(int row = 1; row<=n; row++){
    for(int col = 1; col <= n; col++){
        printf("%d\t", row*col);
    }
    printf("\n");
  }

return 0;
}
