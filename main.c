#include <stdio.h>

const int SIZE = 3;

int printMatrix(int matrix[SIZE][SIZE], int sideMatrix[SIZE]){
    printf("x1\t|x2\t|x3\t|b\t|\n");
    for (unsigned short i = 0; i < SIZE; i++)
        {
            for (unsigned short j = 0; j < SIZE; j++)
            {
                printf("%d\t|", matrix[i][j]);
            }
            printf("%d\t|", sideMatrix[i]);
            printf("\n");
        }

    return 0;
}

int main(void){
    int x[SIZE][SIZE];
    int b[SIZE];
    
    for (unsigned short i = 0; i < SIZE; i++)
    {
        for (unsigned short j = 0; j < SIZE; j++)
        {
            printf("x[%d,%d] = ",i,j);
            scanf("%d",&x[i][j]);
        }
        printf("\n");
    }

    for (unsigned short i = 0; i < SIZE; i++)
    {
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }
    

    printMatrix(x, b);
    
    return 0;
}

