#include <stdio.h>
#define MAX 10

// Display Matrix
void display(int a[MAX][MAX], int n){
    int i, j;
    for(i=0; i<n; i++){
        for(j=0;j<n;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

// Addition
void add(int a[MAX][MAX], int b[MAX][MAX], int n){
    int c[MAX][MAX], i , j;

    for(i=0; i<n; i++){
        for(j=0;j<n;j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\n Addition Result:  \n");
    display(c,n);
}

//Saddle point
void saddlePoint(int a[MAX][MAX], int n){
    int i, j, k, min, col, found = 0;

    for(i=0; i < n; i++){
        min = a[i][0];
        col = 0;

        //Find minimum in row
        for(j = 1; j < n; j++){
            if(a[i][j] < min){
                min = a[i][j];
                col = j;
            }
        }

        //Check if max in column
        for(k = 0; k < n; k++){
            if(a[k][col] < min)
                break;
        }

        if(k == n) {
            printf("\n Saddle Point: %d \n", min);
            found = 1;
        }
    }

    if(!found)
        printf("\n No Saddle Point \n");
}

//Inverse of matrix 
void inverse(int a[MAX][MAX], int n){
    if(n != 2) {
        printf("\n Inverse for 2x2 matrix \n");
        return;
    }

    float det = a[0][0]*a[1][1] - a[0][1]*a[1][0];

    if(det == 0) {
        printf("\n Inverse does not exist as determinant is zero \n");
        return;
    }

    printf("\n Inverse Matrix: \n");
    printf("%0.2f %0.2f \n", a[1][1]/det, -a[0][1]/det);
    printf("%0.2f %0.2f \n", -a[1][0]/det, a[0][0]/det);
}

//Magic Square
void magicSquare(int a[MAX][MAX], int n) {
    int i, j , sum = 0, temp , flag = 1;

    //first row sum
    for(j = 0; j < n; j++)
        sum += a[0][j];

    //check rows
    for(i = 1; i < n; i++){
        temp = 0;
        for(j = 0; j < n; j++)
            temp += a[i][j];
        if(temp != sum)
            flag = 0;
    }

    //columns
    for(j = 0; j < n; j++) {
        temp = 0;
        for(i = 0; i < n; i++)
            temp += a[i][j];
        if(temp != sum)
            flag = 0;
    }

    //diagonals
    temp = 0;
    for(i = 0; i < n; i++)
        temp += a[i][i];
    if(temp != sum)
        flag = 0;

    temp = 0;
    for(i = 0; i < n; i++)
        temp += a[i][n-i-1];
    if(temp != sum)
        flag = 0;

        if(flag)
            printf("\n Matrix is magic square \n");
        else
            printf("\n Matrix is not a magic square \n");
}

int main() {
    int a[MAX][MAX], b[MAX][MAX];
    int n, i, j;

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    printf("\n Enter elements of matrix A: \n");
    for(i = 0 ; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of Matrix B:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("\n Matrix A: \n");
    display(a, n);

    printf("\n Matrix B: \n");
    display(b, n);

    add(a , b, n);
    saddlePoint(a , n);
    inverse(a , n);
    magicSquare(a, n);

    return 0;
}

