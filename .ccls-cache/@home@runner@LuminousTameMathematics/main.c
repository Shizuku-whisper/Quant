#include <stdio.h>
#include <string.h>

/*Faça um programa que receba uma frase (máximo 100 caracteres) e uma letra
 * qualquer, calcule e mostre a quantidade que essa letra aparece na frase
 * digitada.*/

int main(void) {
  // Entrada: frase
  char frase[101];
  char letra;
  int i = 0, cont = 0, tam = 0;

  printf("\n\nDigite uma frase (Max. 100 caracteres): ");
  gets(frase);
  tam = strlen(frase);
  printf("\n\nDigite a letra que você deseja procurar: ");
  scanf("%c", &letra);

  while (i <= tam) {
    if (frase[i] == letra) {
      cont = cont + 1;
    }
    i++;
  }
  printf("\n\nA letra \'%c\' apareceu %d vezes", letra, cont);
}