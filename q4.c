
// #include <stdio.h>
// #include <string.h>

// #define TAM 100

// int main() 
//{
//     char str1[TAM], str2[TAM];
    
//     printf("Digite a primeira string: ");
//     fgets(str1, TAM, stdin);
//     printf("Digite a segunda string: ");
//     fgets(str2, TAM, stdin);
    
//     str1[strcspn(str1, "\n")] = '\0';
//     str2[strcspn(str2, "\n")] = '\0';
    
//     if (strcmp(str1, str2) == 0) 
//     {
//         printf("As strings sao iguais.\n");
//     } 
//     else 
//     {
//         printf("As strings sao diferentes.\n");
//     }
    
//     return 0;
// }

#include <stdio.h>

#define TAM 100

int main() 
{
    char str1[TAM], str2[TAM];
    int i = 0, iguais = 1;
    
    printf("Digite a primeira string: ");
    fgets(str1, TAM, stdin);
    printf("Digite a segunda string: ");
    fgets(str2, TAM, stdin);
    
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    
    while (str1[i] != '\0' && str2[i] != '\0') 
    {
        if (str1[i] != str2[i]) 
        {
            iguais = 0;
            break;
        }
        i++;
    }
    
    if (str1[i] != '\0' || str2[i] != '\0') 
    {
        iguais = 0;
    }
    
    if (iguais) 
    {
        printf("As strings sao iguais.\n");
    } 
    else 
    {
        printf("As strings sao diferentes.\n");
    }
    
    return 0;
}
