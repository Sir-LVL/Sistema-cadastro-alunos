#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    char turma, curso[50], nome[50];

    printf("Escreva seu nome: \n");
    fgets(nome, 50, stdin);
    printf("Digite sua idade: \n");
    scanf(" %i", &idade);
    printf("Digite seu curso: \n");
    scanf(" %s", &curso);
    printf("E por ultimo, digite sua turma: \n");
    scanf(" %c", &turma);
    printf("Seu nome é %s, tem %i anos, seu curso é %s e sua turma é %c", nome, idade, curso, turma);
    return 0;
}
