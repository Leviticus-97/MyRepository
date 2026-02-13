#include <stdio.h>

int main(){
    int tdgt,a,b,temp,ans=0;
    printf("Enter a three digit number: ");
    scanf("%d" , &tdgt);
    tdgt = temp;
    while(tdgt != 0){
        tdgt = tdgt/10;
        b = tdgt%10;
        tdgt = (tdgt*tdgt*tdgt) + (b*b*b);

    }
    if( ans == tdgt){
        printf("The given number %d is an Armstrong number" , tdgt);
    }
    else{
        printf("The given number %d is not an Armstrong number" , tdgt);
    }
    return 0;

}