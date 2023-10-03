#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    char c;
   do
    {
        printf("Digite qual operação deseja fazer?: +, -, *, /, ^: \n");
        scanf("%c", &c );
    } while (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');



return 0;
}