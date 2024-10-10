#include <stdio.h>
int main(void){
    
    
    int x[3][3];
    // printf("x1\t|x2\t|x3\t|b\t|");
    for (unsigned short i = 0; i < 3; i++)
    {
        for (unsigned short j = 0; j < 3; j++)
        {
            printf("x[%d,%d]=",i,j);
            scanf("%d",&x[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}