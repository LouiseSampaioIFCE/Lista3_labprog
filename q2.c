#include <stdio.h>
#include <string.h>

#define TAM 100

int main() 
{
    char str[TAM];
    char ch;
    
    printf("Digite uma string: ");
    fgets(str, TAM, stdin);
    printf("Digite um caractere: ");
    scanf("%c", &ch);
    
    if (strchr(str, ch) != NULL) 
    {
        printf("O caractere '%c' esta na string.\n", ch);
    } 
    else 
    {
        printf("O caractere '%c' nao esta na string.\n", ch);
    }
    
    return 0;
}
