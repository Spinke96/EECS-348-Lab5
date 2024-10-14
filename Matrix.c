#include <stdio.h>
#define SIZE 5

void printMatrix(int matrix[SIZE][SIZE]){
    for(int row = 0; row < SIZE; row++){
        for(int col = 0; col < SIZE; col++){
            printf("%d ",matrix[row][col]);
        }
        printf("\n");
    }
}

void addMatrices(int matrix1[SIZE][SIZE], int matrix2[SIZE][SIZE]){
    int results[SIZE][SIZE];
    for(int row = 0; row < SIZE; row++){
        for(int col = 0; col < SIZE; col++){
            results[row][col] = matrix1[row][col] + matrix2[row][col];
        }
    }
    printf("Sum of the arrays:\n");
    printMatrix(results);
}

void multiplyMatrices(int matrix1[SIZE][SIZE], int matrix2[SIZE][SIZE]){
    int results[SIZE][SIZE];
    for(int row = 0; row < SIZE; row++){
        for(int col = 0; col < SIZE; col++){
            results[row][col] = matrix1[row][col] * matrix2[row][col];
        }
    }
    printf("Product of the arrays:\n");
    printMatrix(results);
}

void transposeMatrix(int matrix[SIZE][SIZE]){
    int results[SIZE][SIZE];
    for(int row = 0; row < SIZE; row++){
        for(int col = 0; col < SIZE; col++){
            results[col][row] = matrix[row][col];
        }
    }
    printf("Transposed Matrix:\n");
    printMatrix(results);
}

int main(){
    //Given array values
    int m1[SIZE][SIZE] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}};
    int m2[SIZE][SIZE] = {
        {25, 24, 23, 22, 21},
        {20, 19, 18, 17, 16},
        {15, 14, 13, 12, 11},
        {10, 9, 8, 7, 6},
        {5, 4, 3, 2, 1}};
        
    int choice = 0;
    printf("What would you like to do? 1)Add Matrices 2)Multiply Matrices 3)Transpose 4)Print a matrix");
    scanf("%d", &choice);
    if(choice == 1){
        //adds matrix
        addMatrices(m1, m2);
    }
    if(choice == 2){
        //multiply matrix
        multiplyMatrices(m1, m2);
    }
    if(choice == 3){
        //print transpose function
        int matrix_print_choice = 0;
        printf("Which matrix would you like to Transpose? 1) or 2)?:\n");
        scanf("%d",&matrix_print_choice);
        if(matrix_print_choice == 1){
            transposeMatrix(m1);
        }
        if(matrix_print_choice == 2){
            transposeMatrix(m2);
        }
    }
    if(choice == 4){
        //print matrix function
        int matrix_print_choice = 0;
        printf("Which matrix would you like to print? 1) or 2)?:\n");
        scanf("%d",&matrix_print_choice);
        if(matrix_print_choice == 1){
            printMatrix(m1);
        }
        if(matrix_print_choice == 2){
            printMatrix(m2);
        }
    }
}