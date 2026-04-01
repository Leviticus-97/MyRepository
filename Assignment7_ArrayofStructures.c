#include <stdio.h>

struct student {
    int roll;
    char name[50];
    float m1,m2,m3;
    float total;
    float percentage;
};

int main() {
    struct student s[100];
    int n,i;

    printf("Enter number of students: ");
    scanf("%d ", &n);

    //input
    for(i = 0; i < n; i++) {
        printf("\n Enter details of student %d \n", i+1);
            
            printf("Roll number: \n ");
            scanf("%d", &s[i].roll);

            printf("Name: \n");
            scanf("%s", s[i].name);

            printf("Marks in 3 subjects: \n");
            scanf("%f %f %f", &s[i].m1, &s[i].m2, &s[i].m3);

            //Calculation
            s[i].total = s[i].m1 +s[i].m2 +s[i].m3 ;
            s[i].percentage = s[i].total/3;
    }

    //output
    printf("\n Student Results are: \n");

    for(i=0;i <n; i++) {
        printf("\n Student %d \n", i+1);
        printf("Roll No: %d \n", s[i].roll);
        printf("Name: %s \n", s[i].name);
        printf("Total Marks: %.2f \n", s[i].total);
        printf("Percentage: %.2f%% \n", s[i].percentage);
    }

    return 0;
}