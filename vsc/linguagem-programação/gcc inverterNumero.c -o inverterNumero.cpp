#include <stdio.h>

int inverterNumero(int numero) {
    int invertido = 0, resto;
    while (numero != 0) {
        resto = numero % 10;  // Pega o último dígito
        invertido = invertido * 10 + resto;  // Coloca o dígito invertido no novo número
        numero /= 10;  // Remove o último dígito
    }
    return invertido;
}

int main() {
    int numero, numeroInvertido;
    printf("Digite um número de três dígitos: ");  // Corrigido as aspas
    scanf("%d", &numero);
    
    if (numero >= 100 && numero <= 999) {  // Verifica se é um número de 3 dígitos
        numeroInvertido = inverterNumero(numero);
        printf("999: %d\n", numeroInvertido);
    } else {
        printf("1000.\n");
    }
    return 0;
}

