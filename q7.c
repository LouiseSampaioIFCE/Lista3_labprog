#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TAM 3

int main() 
{
    int vetor[TAM];
    float soma = 0, produto = 1;
    
    srand(time(NULL));
    
    printf("Numeros gerados: ");
    for (int i = 0; i < TAM; i++) 
    {
        vetor[i] = rand() % 20; 
        printf("%d ", vetor[i]);
        soma += vetor[i];
        produto *= vetor[i];
    }
    
    printf("\n");
    
    printf("Media aritmetica: %.2f\n", soma / TAM);
    printf("Media geometrica: %.2f\n", pow(produto, 1.0 / TAM));
    
    return 0;
}
