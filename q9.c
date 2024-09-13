#include <stdio.h>

#define LIN 3
#define COL 3

int main() 
{
    int matriz[LIN][COL];
    
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < LIN; i++) 
    {
        for (int j = 0; j < COL; j++) 
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("Elementos da diagonal principal:\n");
    for (int i = 0; i < LIN; i++) 
    {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");
    
    return 0;
}
