// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// #define TAM 100

// int main() 
// {
//     int vetor[TAM];
//     int min, max;
    
//     srand(time(NULL));
    
//     printf("Digite o valor minimo: ");
//     scanf("%d", &min);
//     printf("Digite o valor maximo: ");
//     scanf("%d", &max);
    
//     printf("Vetor gerado: ");
//     for (int i = 0; i < TAM; i++) 
//     {
//         vetor[i] = rand() % (max - min + 1) + min;
//         printf("%d \n", vetor[i]);
//     }
//     printf("\n");
    
//     int i, j, min_idx, temp;
//     for (i = 0; i < TAM - 1; i++) 
//     {
//         min_idx = i;
//         for (j = i + 1; j < TAM; j++) 
//         {
//             if (vetor[j] < vetor[min_idx]) 
//             {
//                 min_idx = j;
//             }
//         }

//         temp = vetor[min_idx];
//         vetor[min_idx] = vetor[i];
//         vetor[i] = temp;
//     }
    
//     printf("Vetor ordenado: ");
//     for (int i = 0; i < TAM; i++) 
//     {
//         printf("%d ", vetor[i]);
//     }
//     printf("\n");
    
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

int main() {
    int vetor[TAM];
    int min, max;
    
    srand(time(NULL));
    
    printf("Digite o valor minimo: ");
    scanf("%d", &min);
    printf("Digite o valor maximo: ");
    scanf("%d", &max);
    
    printf("Vetor gerado: ");
    for (int i = 0; i < TAM; i++) 
    {
        vetor[i] = rand() % (max - min + 1) + min;
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    int temp;
    for (int i = 0; i < TAM - 1; i++) 
    {
        for (int j = 0; j < TAM - i - 1; j++) 
        {
            if (vetor[j] > vetor[j + 1]) 
            {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
    
    printf("Vetor ordenado: ");
    for (int i = 0; i < TAM; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    return 0;
}
