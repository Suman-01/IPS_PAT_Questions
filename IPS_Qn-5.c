#include <stdio.h>

#define size 3

void multiply(int matrix1[][size], int matrix2[][size], int result[][size]) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            result[i][j] = 0;
            for (int k = 0; k < size; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}


int main() {
    int matrix1[size][size];
    int matrix2[size][size];
    int result[size][size];
    
    printf("Enter the elements of the first matrix (3x3):\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    printf("Enter the elements of the second matrix (3x3):\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    multiply(matrix1, matrix2, result);
    
    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", result[i][j]);
        }
    }
    
    return 0;
}
