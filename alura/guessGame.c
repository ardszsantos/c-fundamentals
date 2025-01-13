#include <stdio.h>

#define TENTATIVAS 5

int main() {

    printf("***********************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("***********************************\n");

    int numerosecreto = 42;
    int chute;

    for(int i = 1; i <= TENTATIVAS; 1) {
        printf("Tentativa %d de %d\n", i, TENTATIVAS);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d \n", chute);

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if(acertou) {
            printf("Parabéns! Você acertou!\n");
            printf("Jogue de novo, você é um bom jogador!\n");
            break;
        } else if(maior) {
            printf("Seu chute foi maior que o número secreto!\n");
        } else {
            printf("Seu chute foi menor que o número secreto!\n");
        }

        i++;
    }


    return 0;
}

