#include<stdio.h>
#include<math.h>
int main()
{
    char nome[30];
    int idade, nasc;    // Declarando variaveis
    int atual = 2024;   // Declarando o ano atual    
    printf("Vamos calcular se voce ja eh um adulto completo...\n");
    printf("Qual seu nome?\n");
    scanf("%s", &nome);
    printf("Em que ano voce nasceu?\n"); 
    while (1)   // Loop ate ser digitado um valor maior que 0
    {
        if (scanf("%d", &nasc) > 0 ) { // Chamando um SCANF para coletar o ano de nascimento e verificar se e valido.
            break;
        } else {
            printf("Digite um valor valido.\n"); 
        }
        while (getchar() != '\n');  // Limpa a memoria para nao ficar duplicando o ELSE e evita repeticao infinita     
    }   
    idade = (atual - nasc); // Calculo da idade da pessoa
    printf("Voce tem %d", idade);
    printf(" anos de idade %s", nome);  // Mostrando os valores coletados
    printf(".");
    if (idade < 16) // Validacao para menor de idade
    {
        printf(" E com essa idade voce ainda nao eh um adulto completo."); // Se nao for adulto
    } else if (idade >= 16 && idade < 18) // Validacao para quase adulto
    {
        printf(" E com essa idade voce pode ja pode tirar seu titulo de eleitor.");
    } else // se nao for de menor, nem quase adulto, eh adulto
    {
        printf(" E com essa idade voce ja pode tirar seu titulo de eleitor e carteira de motorista.");
    }
    return 0;
}
