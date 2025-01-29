#include<stdio.h>
int main()
{
    char aluno[30];                 /* Declarando variaveis*/
    char materia[30];
    float nota1, nota2, nota3;
    float media;                                       
    printf("Qual o nome do aluno?\n");
    scanf("%s", &aluno);
    printf("Qual materia vamos calcular sua situacao ate agora?\n");
    scanf("%s", &materia);
    printf("Certo, vamos calcular sua situacao em: %s\n", materia);
    printf("Quanto voce tirou no primeiro bimestre em %s", materia);
    printf("?\n");
    scanf("%f", &nota1);
    printf("Certo, quanto voce tirou no segundo bimestre?\n");
    scanf("%f", &nota2);
    printf("Ok, quanto voce tirou no terceiro bimestre?\n");
    scanf("%f", &nota3);
    media = ((nota1+nota2+nota3) / 3);  /* Calculo da media*/
    printf("Sua nota ate agora eh: %.2f\n", media);
    if (media >= 7) {       /* Estrutura de validacao */
            printf("Parabens! voce esta bem ate agora na materia %s", materia); /* Se Aprovado */
            printf(", %s\n", aluno);
    }   else if (media >=4 && media < 7) { /* Precisa fazer avaliacao final */
            printf("Voce ficou abaixo da media e tera que fazer avaliacao final para a materia de %s", materia);
            printf(", %s\n", aluno);
    }   else { /* Reprovado */
            printf("Infelizmente voce ja esta reprovado na materia de %s", materia);
            printf(", %s\n", aluno);
    }
    system("pause");
    return 0;
}