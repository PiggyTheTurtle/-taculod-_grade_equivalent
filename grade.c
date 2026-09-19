#include <stdio.h>

int main(){
    //input a numeric score(0-100)
    int grade;

    printf("Input your grade:");
    scanf("%d",&grade);

    // determine the letter grade using if-else logic
    if(grade >= 90){
        printf("Grade: A");
    } 
    else if(grade >= 80){
        printf("Grade: B");
    }
    else if(grade >= 70){
        printf("Grade: C");
    }
    else if(grade >= 60){
        printf("Grade: D");
    }
    else if(grade <= 59){
        printf("Grade: F");
    }

    return  0;

}
