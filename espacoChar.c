#include <stdio.h>

int main() {
    char nome[50];  // Array de caracteres para armazenar a string

    printf("Digite seu nome completo: ");
    scanf(" %[^\n]", nome);  // Lê até encontrar um ENTER (nova linha)

    printf("Seu nome é: %s\n", nome);

    return 0;
}
