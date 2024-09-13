// #include <stdio.h>
// #include <string.h>

// #define TAM 200

// int main() {
//     char str1[TAM], str2[TAM];
    
//     printf("Digite a primeira string: ");
//     fgets(str1, TAM, stdin);
//     printf("Digite a segunda string: ");
//     fgets(str2, TAM, stdin);
    
//     str1[strcspn(str1, "\n")] = '\0';
//     str2[strcspn(str2, "\n")] = '\0';
    
//     strcat(str1, str2);
    
//     printf("String concatenada: %s\n", str1);
    
//     return 0;
// }

#include <stdio.h>

#define TAM 200

int main() 
{
    char str1[TAM], str2[TAM];
    int i = 0, j = 0;
    
    printf("Digite a primeira string: ");
    fgets(str1, TAM, stdin);
    printf("Digite a segunda string: ");
    fgets(str2, TAM, stdin);
    
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    
    while (str1[i] != '\0') 
    {
        i++;
    }
    
    while (str2[j] != '\0') 
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    
    str1[i] = '\0';
    
    printf("String concatenada: %s\n", str1);
    
    return 0;
}
