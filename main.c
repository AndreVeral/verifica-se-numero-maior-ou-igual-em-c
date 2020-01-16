#include <stdio.h>
#include <locale.h>

int main() {
    int numero1;
    int numero2;
    setlocale(LC_ALL, "Portuguese");
    wprintf(L"Digite um número inteiro\n");
    scanf("%d", &numero1);
    wprintf(L"Digite outro número inteiro\n");
    scanf("%d", &numero2);
    if(numero1 > numero2){
        wprintf(L"%d é maior do que %d", numero1, numero2);
    }else if(numero2 > numero1){
        wprintf(L"%d é maior do que %d", numero2, numero1);
    }else{
        wprintf(L"Os números são iguais");
    }
    return 0;
}