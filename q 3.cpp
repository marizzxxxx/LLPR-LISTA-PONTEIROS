/*Escreva um programa que declare duas vari�veis inteiras e dois ponteiros para essas vari�veis. 
Em seguida, preencha as vari�veis com valores informados pelo usu�rio. 
Utilizando ponteiros, troque os valores entre as duas vari�veis sem usar uma vari�vel tempor�ria e sem utilizar operadores de atribui��o direta. 
Em seguida, imprima os valores atualizados das duas vari�veis.*/

#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    int var_um, var_dois, *varum, *vardois;
    
    printf("D� um valor para a variavel um: ");
    scanf("%d", &var_um);
    
    printf("D� um valor para a variavel dois: ");
    scanf("%d", &var_dois);
    
    varum = &var_um;
    vardois = &var_dois;
    
    *varum = *varum + *vardois;
    *vardois = *varum - *vardois; 
    *varum = *varum - *vardois;
    
    printf("\nNovo valor da variavel um: %d\n", var_um);
    printf("Novo valor da variavel dois: %d\n", var_dois);
    
    return 0;
}

