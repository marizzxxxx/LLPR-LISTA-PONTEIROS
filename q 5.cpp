/*Escreva um programa que declare uma vari�vel real e um ponteiro para essa vari�vel. 
Em seguida, preencha a vari�vel com um valor real informado pelo usu�rio e utilize o ponteiro para calcular o dobro desse valor. 
Por fim, utilize o ponteiro para imprimir na tela o valor original e o dobro calculado.*/

#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    float valor, *ponteiro;
    
    printf("Digite um n�mero: ");
    scanf("%f", &valor);
    
    ponteiro = &valor;
    
    printf("O n�mero digitado foi: %.2f\n", *ponteiro);
    printf("E o dobro desse n�mero �: %.2f\n", *ponteiro * 2);
    
    return 0;
}

