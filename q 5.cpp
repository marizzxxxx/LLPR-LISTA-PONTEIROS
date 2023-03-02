/*Escreva um programa que declare uma variável real e um ponteiro para essa variável. 
Em seguida, preencha a variável com um valor real informado pelo usuário e utilize o ponteiro para calcular o dobro desse valor. 
Por fim, utilize o ponteiro para imprimir na tela o valor original e o dobro calculado.*/

#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    float valor, *ponteiro;
    
    printf("Digite um número: ");
    scanf("%f", &valor);
    
    ponteiro = &valor;
    
    printf("O número digitado foi: %.2f\n", *ponteiro);
    printf("E o dobro desse número é: %.2f\n", *ponteiro * 2);
    
    return 0;
}

