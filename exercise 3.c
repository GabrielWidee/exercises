
#include <stdio.h>

int main(){

    float raio;
    float perimetro;
    float area;
    float pi;
    
    printf("digite o raio da circunferência" "\n");
    scanf("%f", &raio);
    
    pi = 3.1415; 
    perimetro = 2 * pi * raio;
    area = pi * raio * raio;
    
    printf("o perimetro da circunferencia é:" "\n" "%f", perimetro);
    printf("\n""a area da circunferencia é:" "\n" "%f", area);
    

}
