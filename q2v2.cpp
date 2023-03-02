/*Escreva um programa que solicite ao usuário que digite uma string e, em seguida, crie uma nova string
que seja a cópia da string original, mas com todas as vogais removidas. 
O programa deve usar ponteiros para manipular as strings.*/
	
#include <stdio.h>
#include <locale.h>

void tira_vogais(char *orig, char *svogais) {
	
	int x = 0;	
    for (int i = 0; orig[i] != '\0'; i++) {
        if (!(orig[i] == 'a' || orig[i] == 'e' || orig[i] == 'i' || orig[i] == 'o' || orig[i] == 'u'
            || orig[i] == 'A' || orig[i] == 'E' || orig[i] == 'I' || orig[i] == 'O' || orig[i] == 'U')) {
            svogais[x] = *(orig+i);
            x++;
        }
    }
}

int main() {
	
	setlocale(LC_ALL, "Portuguese_Brazil");

    char orig[100];
    char svogais[100];

    printf("Digite uma frase: ");
    fgets(orig, 100, stdin);

    // cópia
    char *p_orig = orig;
    char *p_copia = p_orig;

    // cópia sem vogais
    char *p_svogais = svogais;
    tira_vogais(p_copia, p_svogais);

    printf("Original: %s", orig);
    printf("Sem vogais: %s\n", svogais);

    return 0;
}

