/* FUN��O:
    Escreva um programa que converta as coordenadas polares (raio r e �ngulo a) em
coordenadas cartesianas (abscissa x e ordenada y), e acordo com as f�rmulas: x = r x cos(a)
e  y=r x sin(a)
OBS: Use as fun��es  sin  e  cos  da biblioteca matem�tica  math.h  . Considere  r  como o
raio.
*/

/* Autor : Ednaldo Taurino    
   Data  : 27/09/2023
*/

/*
    observa��es: adicionar melhorias;
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
setlocale(LC_ALL, "Portuguese_BRazil");
    double raio, angulo_graus, angulo_radianos;
    double x, y, pi= 3.14159265358979323846;

    printf("Digite o raio (r): ");
    scanf("%lf", &raio);

    printf("Digite o �ngulo (em graus): ");
    scanf("%lf", &angulo_graus);

    angulo_radianos = angulo_graus * (pi / 180.0); // Converter de graus para radianos

    x = raio * cos(angulo_radianos);
    y = raio * sin(angulo_radianos);

    printf("Coordenadas cartesianas (x, y): (%lf, %lf)\n", x, y);

    return 0;
}