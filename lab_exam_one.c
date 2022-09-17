#include<stdio.h>

int main(){

// A

   char letter;
   scanf("%c", &letter);

   switch(letter){
   case 'a':
       printf("vowel");
   break;
   case 'e':
       printf("vowel");
   break;
   case 'i':
       printf("vowel");
   break;
   case 'o':
       printf("vowel");
   break;
   case 'u':
       printf("vowel");
   break;
   default:
       printf("consonant");
   }

// B

   int n;
   scanf("%d", &n);
   for(int i = 1; i <= n; i++){
       printf("%d Abracadabra\n", i);
   }



// C

   int n;
   scanf("%d", &n);
   int below_zero = 0;
   for(int i = 1; i <= n; i++){
       int temp;
       scanf("%d", &temp);
       if(temp < 0){
           below_zero += 1;
       }
   }
   printf("%d\n", below_zero);


// D

   int n;
   scanf("%d", &n);

   double sum = 0;
   for(int i = 1; i <= n; i++){
       double a, b;
       scanf("%lf %lf", &a, &b);
       double total = a * b;
       sum = sum + total;
   }
   printf("%.3lf", sum);


// E


   int x, y, n;
   scanf("%d %d %d", &x, &y, &n);

   for(int i = 1; i <= n; i++){
       if(i % x == 0 && i % y == 0){
           printf("FizzBuzz\n");
       }
       else if(i % x == 0){
           printf("Fizz\n");
       }
       else if(i % y == 0){
           printf("Buzz\n");
       }
       else{
           printf("%d\n", i);
       }
   }



// F

   int a, b, c;
   scanf("%d %d %d", &a, &b, &c);
   int sequence = 575;


   if((a == 7 && b == 5 && c == 5) || (a == 5 && b == 7 && c == 5) || (a == 5 && b == 5 && c == 7)){
       printf("YES");
   } else {
       printf("NO");
   }



// G


   int A, B, C;
   scanf("%d %d %d", &A, &B, &C);
   if(C >= A && C <= B){
       printf("Yes");
   } else {
       printf("No");
   }



// H
   int A, B;
   scanf("%d %d", &A, &B);
   int total = A + B;

   if(total >= 10){
       printf("error");
   } else {
       printf("%d", total);
   }




// I
   int a, b, c;
   scanf("%d %d %d", &a, &b, &c);
   int minprice = 0;
   if(a > b && a > c){
       minprice = b + c;
   } else if (b > a && b > c){
       minprice = a + c;
   } else if (c > a && c > b){
       minprice = a + b;
   } else {
       minprice = a + b;
   }
   printf("%d", minprice);

// J
    int x;
   scanf("%d", &x);
   
   if(x < 1200){
       printf("ABC");
   } else {
       printf("ARC");
   }

    return 0;


    return 0;
}
