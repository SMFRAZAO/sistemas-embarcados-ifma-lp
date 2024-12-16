#include <stdio.h>

int inverterNumero(int numero) {
    int invertido = 0, resto;
    while (numero != 0) {
        resto = numero % 10;  // Pega o �ltimo d�gito
        invertido = invertido * 10 + resto;  // Coloca o d�gito invertido no novo n�mero
        numero /= 10;  // Remove o �ltimo d�gito
    }
    return invertido;
}

int main() {
    int numero, numeroInvertido;
    printf("Digite um n�mero de tr�s d�gitos: ");  // Corrigido as aspas
    scanf("%d", &numero);
    
    if (numero >= 100 && numero <= 999) {  // Verifica se � um n�mero de 3 d�gitos
        numeroInvertido = inverterNumero(numero);
        printf("999: %d\n", numeroInvertido);
    } else {
        printf("1000.\n");
    }
    return 0;
}

