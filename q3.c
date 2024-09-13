#include <stdio.h>

#define TAM 100

int main() 
{
    char str[TAM];
    int i = 0;
    
    printf("Digite uma string: ");
    fgets(str, TAM, stdin);

    while (str[i] != '\0' && str[i] != '\n') 
    {
        i++;
    }
    
    printf("Quantidade de caracteres: %d\n", i);
    
    return 0;
}
