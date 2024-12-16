
void infomacaoPessoal(){
    printf("\n");
    printf("\nCURSO: Sistemas Embarcados");
    printf("\nDISCIPLINA: Linguagem de Programacao");
    printf("\nALUNO: Sergio Murilo Sousa Frazao Junior");
}

int main() {
    int numero, numeroInvertido;

    infomacaoPessoal();

    printf("\n\nDigite um numero de tres digitos: ");  // Corrigido as aspas
    scanf("%d", &numero);

    if (numero >= 100 && numero <= 999) {  // Verifica se � um n�mero de 3 d�gitos
        numeroInvertido = inverterNumero(numero);
        printf("\n\nNumero Invertido: %d\n", numeroInvertido);
    } else {
        printf("\n\nDigite um numero de 3 digitos!");
        printf("\n\n");
    }
    return 0;
}

