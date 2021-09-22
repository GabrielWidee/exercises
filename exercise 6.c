#include <stdio.h>

int main()
{
    int numero1;
    int numero2;
    int quociente;
    int resto;
    
    printf("escreva um numero" "\n");
    scanf("%d", &numero1);
    printf("escreva outro numero" "\n");
    scanf("%d", &numero2);
    
    quociente = numero1 / numero2;
    resto = numero1 % numero2;
    
    printf("o quociente da divisão é:" "%d" "\n", quociente);
    printf("\n" "o resto da divisão é:" "%d" "\n", resto);
    
}
