//Write a program to determine whether a student has passed or failed. To pass, astudent requires a total of 40% and at least 33% in each subject. Assume thereare three subjects and take the marks as input from the user

#include <stdio.h>

int main(){
    int marks1, marks2, marks3;
    printf("Enter the Marks 1:\n");
    scanf("%d", &marks1);
    printf("Enter the Marks 2:\n");
    scanf("%d", &marks2);
    printf("Enter the Marks 3:\n");
    scanf("%d", &marks3);

    if(marks1<33 || marks2<33 || marks3<33){
        printf("You are Failed bcz of less marks in individual subject(s)");
    }
    else if(((marks1 + marks2 +marks3)/3) < 40){
        printf("You are Failed bcz of less marks in total");
    }
    else{
        printf("You are Passed");
        }
    return 0;
}