#include <stdio.h>
#include <locale.h>
#include <stdlib.h> // biblioteca do windows.

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int escolha;
    do{

    

    printf("Menu:\n");
    printf("1. Imprimir um 'Ol� mundo! \n");
    printf("2. Imprimir sauda��o\n");
    printf("3. Sair\n");
    printf("Escolha uma op��o\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("Imprimindo um ola mundo!\n");
        printf("Ol� mundo! \n");
        system("pause");
        system("cls");
        break;

    case 2:

        printf("Seja gentil quando for possivel. \n");
        printf("Sempre � possivel! \n");
        printf("- Dalai lama\n");
        system("pause");
        system("cls");
        break;

    case 3:

        printf("Saindo do programa \n");

    default:
        printf("Op��o invalida! \n");
        system("pause");
        system("cls");
    }

    }while(escolha!=3);

    return 1;
}
