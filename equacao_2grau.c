#include<stdio.h>
#include<math.h>    /* biblioteca para calculos matematicos */
int main() 
{
    int a, b, c;
    float delta;    /* Declarando variaveis */
    float x1, x2;
    printf("Para calcular a equacao de 2 grau no formato ax2 + bx + c responda as seguintes perguntas...\n");
    printf("Qual o valor de a?\n");
    scanf("%d", &a);    
    printf("Qual o valor de b?\n");
    scanf("%d", &b);
    printf("Qual o valor de c?\n");
    scanf("%d", &c);
    printf("Os termos da equacao de 2 grau utilizados para calcular o delta serao:\n");
    printf("a = %d", a);
    printf(", b = %d", b);  /* Mostrando os dados fornecidos */
    printf(", c =  %d\n", c);
    if (a == 0) { /* Verificando se a equacao e de 2 grau */
        printf("A equacao nao eh de segundo grau. Verifique o valor de a.\n");
        return 1; /* Codigo de saida para erros */
    }
    delta = pow((b), 2) - 4 * a * c; /* Calculando delta */
    if (delta < 0) {    /* Validando o delta */
        printf("O valor de delta nao pode resultar em um valor abaixo de 0, revise os valores inseridos.\n");
        return 1; /* Codigo de saida para erros */
    }   else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        if (delta == 0) { /* Validando delta para a melhorar a saida */
            printf("A equaçao possui uma raiz real dupla de: %.2f\n", x1);
        }   else {  /* Resultado final */
            printf("As raizes da equacao sao: %.2f e %.2f\n", x1, x2);
        }
    }
    return 0;
}