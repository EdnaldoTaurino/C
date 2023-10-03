
// Função : indique a ordem e o resultado das empressões a seguir:
// Autor : Ednaldo Taurino    
// Data  : 26/09/2023
// obervações: não entendi o que se pede!

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese_BRazil");   

// indique a ordem e o resultado das expressões a seguir
    float a, b, c, d, e, f, g, h, i, j;

    a = (2+3 - 5 * 8 ) / 4;
    
    b = (7 * 4) /2 + 9 - 6;

    c = (4/2) / 0.5 * (4 % 2) * 0.5;

    d = 7 > 2 && 3 -5 < 8;

    e = !(3 + 5 != 5/2-1);

    f = 7 % 3 -8 + 4 / 2;

    g = 6 / 3 - 3 * 4 % 2;

    h = 10 > 11 && 11 < 12;

    i = 9 / 3 + 9 % 3 + 9 * 3;

    j = 1 + 2 + 3 / 2;



    printf("%2.f\n", a);
    printf("%2.f\n", b);
    printf("%2.f\n", c);
    printf("%2.f\n", d);
    printf("%2.f\n", e);
    printf("%2.f\n", f);
    printf("%2.f\n", g);
    printf("%2.f\n", h);
    printf("%2.f\n", i);
    printf("%2.f\n", j);

    



    return 0;
}