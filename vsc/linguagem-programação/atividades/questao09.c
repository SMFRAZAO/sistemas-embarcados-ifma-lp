#include <stdio.h>

unsigned long long calcularFatorial(int numero) {
    if (numero < 0) {
        printf("Fatorial nao e definido para numeros negativos.\n");
        return -1;
    }
    unsigned long long fatorial = 1;
    for (int i = 2; i <= numero; i++) {
        fatorial *= i;
    }
    return fatorial;
}

int main() {
    int numero;
    printf("Digite um numero inteiro para calcular o fatorial: ");
    if (scanf("%d", &numero) != 1) {
        printf("Por favor, insira um numero inteiro valido.\n");
        return 1;
    }
    if (numero < 0) {
        printf("Fatorial nao e definido para numeros negativos.\n");
    } else {
        printf("O fatorial de %d e %llu.\n", numero, calcularFatorial(numero));
    }
    return 0;
}
