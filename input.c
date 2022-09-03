#include<stdio.h>

int main(){
    int marks_english;
    int marks_math;

//    printf("Enter Marks in English: ");
//    scanf("%d", &marks_english);
//    printf("Enter Marks in Math: ");
//    scanf("%d", &marks_math);

    printf("Enter Marks in English and Math: ");
    scanf("%d %d", &marks_english, &marks_math);

    int total_marks = marks_english + marks_math;

    printf("Total Marks = %d", total_marks);


    return 0;
}
