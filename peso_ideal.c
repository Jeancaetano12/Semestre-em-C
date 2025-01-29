#include<stdio.h>
#include<ctype.h> // Biblioteca para poder manipular caracteres 
#include<math.h>
int main()
{   
    float peso, alt, imc;   // Declarando variaveis
    char sexo;
    printf("Vamos calcular o peso ideal:\n");
    printf("Para comecar, digite M se voce se identifica como genero masculino ou F para feminino?\n");
    while (1)
    {
        scanf("%c", &sexo);
        sexo = toupper(sexo); // Converte para maiúsculo usando <ctype.h> para facilitar a validação
        if (sexo == 'M' || sexo == 'F') // Teste para validar o que foi digitado
        {                                                               // Teste logico de True ou False dentro do printf (termário)
            printf("Certo, os calculos serao feitos pensados para o genero: %s", (sexo == 'M') ? "Masculino\n":"Femino\n"); 
            break;  // Saindo do loop
        } else {
            printf("Digite M para masculino e F para femino\n"); // loop ate algo valido ser digitado
        }
        while (getchar() != '\n'); // Limpa a memoria para nao ficar duplicando o ELSE e evita repeticao infinita
    }
    printf("Certo, para continuar-mos, digite peso atual em Quilograma:\n"); // Coletando o PESO
    while (1)
    {  
        if (scanf("%f", &peso) > 0 ) // Chama um SCANF e verifica se foi digitado um NUMERO maior que 0
        {
            printf("Voce pesa: %.2f", peso); // Mostra o numero digitado
            printf("kg\n");
            break; // Saindo do loop
        } else {
            printf("Digite um valor valido para peso.\n"); // Loop ate ser digitado um NUMERO maior que 0
        }
        while (getchar() != '\n'); // Limpa a memoria para nao ficar duplicando o ELSE e evita repeticao infinita
    }
    printf("Certo, agora digite sua altura atual:\n"); // Coletando a altura
    while (1)
    {
        if(scanf("%f", &alt) > 0 ) // Chama um SCANF e verifica se foi digitado um NUMERO maior que 0
        { 
            printf("Voce tem de altura: %.2f", alt); // Mostra o numero digitado
            printf("m\n");
            break; // Saindo do loop
        } else {
            printf("Digite um valor valido para altura.\n"); // Loop ate ser digitado um NUMERO maior que 0
        }
        while (getchar() != '\n'); // Limpa a memoria para nao ficar duplicando o ELSE e evita repeticao infinita
    }
    printf("Voce tem: %.2f", peso);
    printf("kg de peso, medindo %.2f", alt);
    printf("m.\n");
    imc = (peso / alt);
    printf("Seu indicie de massa corporal ficou em: %.2f\n", imc);
    
    if (imc < 18.5) {
        printf("Para os padroes de saude, voce esta diagnosticado com: Magreza.\n");
    } else if (imc =  18.5 && imc <= 24.9) {
            printf("Para os padroes de saude, voce esta Saudavel.\n");
    }   else if (imc = 25 && imc <= 29.9) {
            printf("Para os padroes de saude, voce esta diagnosticado com: Sobrepeso.\n");
    }       else if (imc = 30 && imc <= 39.9) {
            printf("Para os padroes de saude, voce esta diagnosticado com: Obesidade.\n");
    }       else {
        printf("Para os padroes de saude, voce esta diagnosticado com: Obesidade GRAVE.\n");
    }
    return 0;
}
