/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
     float base;
     float altura;
     float area;
     float perimetro;
        
        printf("informe a base do retângulo" "\n");
        scanf ("%f", &base);
        printf("informe a altura do retângulo" "\n");
        scanf ("%f", &altura);
        
        area = base * altura;
        
        perimetro = 2 * (base + altura);
        
        printf("a area do retangulo é:" "\n" "%f", area);
        printf("\n" "o perimetro do retangulo é:" "\n" "%f", perimetro);
}

