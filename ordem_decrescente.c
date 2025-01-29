#include <stdio.h>

int main()
{
    int n1,n2,n3,x;

    printf("digite o primeiro numero\n");
    scanf("%d", &n1);
    printf ("digite o segundo numero\n");
    scanf("%d", &n2);
    printf ("digite o terceiro numero \n");
    scanf("%d", &n3);
    if (n2 > n1) {
        x = n1;
        n1 = n2;
        n2 = x;
    }
    if  (n3 > n1) {
        x = n1;
        n1 = n3;
        n3 = x;
    }
    if (n3 > n2) {
        x = n2;
        n2 = n3;
        n3 = x;
    }


    printf ("Os valores em ordem decrescente sao %d , %d , %d \n" , n1 , n2 , n3 );

 system ("pause");
}