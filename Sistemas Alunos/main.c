#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    char turma, curso[50], nome[50];

    printf("Escreva seu nome: \n");
    fgets(&nome, 50, stdin);
    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("Digite seu curso: \n");
    fgets(&curso,50,stdin);
    printf("E por ultimo, digite sua turma: \n");
    scanf("%c", &turma);
    printf("Seu Nome é ",nome, " Sua idade é ", idade, " Seu curso ", curso, " Da turma ", turma);
    return 0;
}
