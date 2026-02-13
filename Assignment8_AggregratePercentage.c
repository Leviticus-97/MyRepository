#include <stdio.h>

int main(){
    int m1,m2,m3,m4,m5;
    printf("Enter marks of all five courses: \n");
    scanf("%d %d %d %d %d" ,&m1,&m2,&m3,&m4,&m5);
    if(m1>=40)
    {
        printf("Student has PASSED in subject1 \n");
    }
    else
    {
        printf("Student has FAILED in subject1 \n");
    }
    if(m2>=40)
    {
        printf("Student has PASSED in subject2 \n");
    }
    else
    {
        printf("Student has FAILED in subject2 \n");
    }
    if(m3>=40)
    {
        printf("Student has PASSED in subject3 \n");
    }
    else
    {
        printf("Student has FAILED in subject3 \n");
    }
    if(m4>=40)
    {
        printf("Student has PASSED in subject4 \n");
    }
    else
    {
        printf("Student has FAILED in subject4 \n");
    }
    if(m5>=40)
    {
        printf("Student has PASSED in subject5 \n");
    }
    else
    {
        printf("Student has FAILED in subject5 \n");
    }
    int aggregate_percentage,s;
    s=m1+m2+m3+m4+m5;
    aggregate_percentage=s/5;
    printf("The aggregate percentage is: %d %% \n" , aggregate_percentage);
    if(aggregate_percentage>=75){
        printf("Student has passed with Distinction");
    }
    else if(75>aggregate_percentage>=60){
        printf("Student has passed with First Division");
    }
    else if(60>aggregate_percentage>=50){
        printf("Student has passed with Second Division");
    }
    else if(50>aggregate_percentage>=40){
        printf("Student has passed with Third Division");
    }
    else{
        printf("Student has Failed \n");
    }


}