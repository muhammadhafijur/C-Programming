#include <stdio.h>

int main() {
    // Solving Bit++ (Practice Contest B)
    int x = 0;

    int n;
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        char a, b, c;
        scanf(" %c%c%c", &a, &b, &c);

        if(b == '+')    x++;
        else if(b == '-') x--;
    }
    printf("%d", x);
}
