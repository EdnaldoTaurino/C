#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_BRazil");

    int idade;
    printf("boate da michele doidona na ph\n");
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("voce � maior de idade!\n");
        printf("BORA BEBEEEER\n");

    }else{
        printf("N�o vai entrar puto pequeno\n");
    }

    printf("Fim do programa!");


    return 0;
}
