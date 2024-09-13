#include <stdio.h>
#include <string.h>

#define TAM 100

int main() 
{
    char str[TAM];
    int length;
    
    printf("Digite uma string: ");
    fgets(str, TAM, stdin);
    
    str[strcspn(str, "\n")] = '\0';
    
    length = strlen(str);
    
    printf("String inversa: ");
    for (int i = length - 1; i >= 0; i--) 
    {
        printf("%c", str[i]);
    }
    printf("\n");
    
    return 0;
}
