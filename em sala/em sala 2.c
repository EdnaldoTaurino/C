#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int contador;
    contador = 1;

    while (contador <=10){
        printf("Voc� n�o me ensinou a te esquecer!\n");
        contador = contador +2;
    }
    

return 1;
}