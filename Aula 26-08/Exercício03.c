#include <stdio.h>

int main()
{
    char caracter;
    int numero;
    float real;
    printf("Digite um caracter: ");
    scanf("%c", &caracter);
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    printf("Digite um numero Real: ");
    scanf("%f", &real);
    printf("As variaves digitadas foram: %c, %d, %.2f.", caracter, numero, real);
    return 0;
}