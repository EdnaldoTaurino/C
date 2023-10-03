#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int contador;
    contador = 0;

    while (contador <= 100){
        printf("numero %d \t", contador);
        contador = contador +2;
    }
    

return 1;
}