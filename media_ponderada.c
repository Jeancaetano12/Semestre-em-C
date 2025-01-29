#include <stdio.h>
int main() 
{   
    char aluno[30]; /* Especificando tamanho maximo do nome*/                                 
    float nota1, nota2, nota3, nota4;               
    int peso1 = 2, peso2 = 2, peso3 = 3, peso4 = 4;  /* Declarando as variaveis e atribuindo valores dos pesos*/
    float MediaPon;
    printf("Qual seu nome?\n");                     
    scanf("%s", &aluno);
    printf("Qual a nota do primeiro bimestre?\n");  
    scanf("%f", &nota1);                                
    printf("Qual a nota do segundo bimestre?\n");      /* Colentando nome e a nota dos alunos */
    scanf("%f", &nota2);
    printf("Qual a nota do terceiro bimestre?\n");
    scanf("%f", &nota3);
    printf("Qual a nota do quarto bimestre?\n");
    scanf("%f", &nota4);
    printf("As notas digitadas foram: %.2f %.2f %.2f %.2f\n", nota1, nota2, nota3, nota4); /* Mostrando o apanhado de informações */
    printf("Para essas notas sera aplicado respectivamente os pesos; peso 2, peso 2, peso 3, e peso 4\n"); /* Explicando como vai ser o calculo*/
    peso1 = 2;
    peso2 = 2;
    peso3 = 3;
    peso4 = 4;
    MediaPon = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3 + nota4 * peso4) / (peso1 + peso2 + peso3); /* Calculo da media */
    printf("Entao o aluno: %s", aluno); 
    printf(" Ficou com a media:\n");
    printf("%.2f\n", MediaPon);     /* Resultado */
    if (MediaPon >= 7) {   /* Validaçao */
        printf("Parabens! voce foi aprovado!\n");  
    } else {
        printf("Reprovado, MELHORE!!\n");
    }
    system("pause");
    return 0;

}