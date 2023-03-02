/*Escreva um programa que declare duas variáveis inteiras e dois ponteiros para essas variáveis. 
Em seguida, preencha as variáveis com valores informados pelo usuário. 
Utilizando ponteiros, troque os valores entre as duas variáveis sem usar uma variável temporária e sem utilizar operadores de atribuição direta. 
Em seguida, imprima os valores atualizados das duas variáveis.*/

#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    int var_um, var_dois, *varum, *vardois;
    
    printf("Dê um valor para a variavel um: ");
    scanf("%d", &var_um);
    
    printf("Dê um valor para a variavel dois: ");
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

