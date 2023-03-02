/*Escreva um programa que solicite ao usuário que digite um número inteiro positivo n. 
Em seguida, crie um vetor dinamicamente alocado de tamanho n e preencha o vetor com valores inteiros informados pelo usuário. 
Em seguida, crie um ponteiro que aponte para o primeiro elemento do vetor e percorra o vetor utilizando esse ponteiro, 
imprimindo na tela os valores dos elementos do vetor em ordem inversa.*/
	
#include <stdio.h>
#include <locale.h>

#define max 10

int main() {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    int n, vet[max];

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    // ver o tamanho para nao explodir
    if (n > max) {
        printf("Tamanho do vetor deve ser no máximo %d.\n", max);
        return 1;
    }

    // vetor com valores
    for (int i = 0; i < n; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vet[i]);
    }

    int *ponteiro = &vet[0];

    // inverso
    for (int i = n-1; i >= 0; i--) {
        printf("%d ", *(ponteiro+i));
    }

    return 0;
}
