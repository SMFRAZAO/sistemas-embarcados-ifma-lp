#include<stdio.h>


void main(){

    int numero;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    //l�gica para verificar se o n�mero � par

    if(numero != 0){
        if(numero%2 == 0){
            printf("\n\n");
            printf("O numero digitado e par!");
        }else{
            printf("\n\n");
            printf("O numero e impar!");
        }
    }else{
        printf("\n\n\n");
        printf("Digite um numero diferente de zero!");
    }

    printf("\n\n\n");

}
