#include <stdio.h>

#define TAM 15

int main() 
{
    float vetor[TAM];
    float menor, maior;
    
    printf("Digite %d elementos do vetor:\n", TAM);
    for (int i = 0; i < TAM; i++) 
    {
        scanf("%f", &vetor[i]);
    }
    
    menor = maior = vetor[0];
    
    for (int i = 1; i < TAM; i++) 
    {
        if (vetor[i] < menor) 
        {
            menor = vetor[i];
        }
        if (vetor[i] > maior) 
        {
            maior = vetor[i];
        }
    }
    
    printf("Soma do menor e maior elemento: %.2f\n", menor + maior);
    
    return 0;
}
