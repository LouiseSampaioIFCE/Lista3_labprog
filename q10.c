#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 3
#define COL 3

int main() 
{
    int matriz[LIN][COL];
    int x, count = 0;
    

    srand(time(NULL));
    
    printf("Matriz gerada:\n");
    for (int i = 0; i < LIN; i++) 
    {
        for (int j = 0; j < COL; j++) 
        {
            matriz[i][j] = rand() % 100; 
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("Digite o valor para pesquisar na matriz: ");
    scanf("%d", &x);

    for (int i = 0; i < LIN; i++) 
    {
        for (int j = 0; j < COL; j++) 
        {
            if (matriz[i][j] == x) 
            {
                count++;
            }
        }
    }
    
    printf("O valor %d aparece %dx na matriz.\n", x, count);
    
    return 0;
}
