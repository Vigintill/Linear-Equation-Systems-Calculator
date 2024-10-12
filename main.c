#include <stdio.h>

int SIZE;

int printMatrix(int matrix[SIZE][SIZE], int sideMatrix[SIZE]){
    printf("|x1\t|x2\t|x3\t|b\t|\n");
    for (unsigned short i = 0; i < SIZE; i++)
        {
            for (unsigned short j = 0; j < SIZE; j++)
            {
                printf("|%d\t", matrix[i][j]);
            }
            printf("|%d\t|", sideMatrix[i]);
            printf("\n");
        }

    return 0;
}

int scanfFillMatrix(int matrix[SIZE][SIZE], int sideMatrix[SIZE]){
    printf("Enter the matrix values:\n");
    for (unsigned short i = 0; i < SIZE; i++)
    {
        for (unsigned short j = 0; j < SIZE; j++)
        {
            printf("x[%d,%d] = ",i,j);
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }

    for (unsigned short i = 0; i < SIZE; i++)
    {
        printf("b[%d] = ", i);
        scanf("%d", &sideMatrix[i]);
    }

    return 0;
}

int main(void){
    printf("Enter matrix size: ");
    scanf("%d\n", &SIZE);

    static const int _size;

    int x[SIZE][SIZE];
    int b[SIZE];
    
    scanfFillMatrix(x, b);
    
    printMatrix(x, b);

    for (int step = 0; step < SIZE - 1; step++)
    {        
        for (int i = step + 1; i < SIZE; i++)
        {
            int q = x[i][step]/x[step][step];
            for (int j = 0; j < SIZE; j++)
            {
                x[i][j] = x[i][j] - x[step][j] * q;
            }

            b[i] = b[i] - b[step] * q;
        }
        printf("\n");
        printf("Step: %d\n", step + 1);
        printMatrix(x, b);
    }
    
    
    return 0;
}