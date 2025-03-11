#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int segundos = time(0);
    srand(segundos);

    int n1 = rand(); 

    int numerosecreto = n1 % 100;
    int tentativas = 1;
    int chute;


    double pontos = 1000;

    int acertou = 0;

    int nivel;
    printf("Qual o nível da dificuldade? \n");
    printf("(1) Fácil (2) Médio (3) Difícil \n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);
    



    int numerodetentativas;
    
    switch(nivel) {
        case 1:
            numerodetentativas = 20;
            break;
        case 2:
            numerodetentativas = 15;
            break;
        default: 
            numerodetentativas = 6;
            break;
    }


    for(int i = 1; i <= numerodetentativas; i++){
        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d \n", chute);

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if(chute < 0) {
            printf("Você não pode chutar números negativos!\n");
            
            continue;
        }

        else if(acertou) {

            
            break;
        } else if(maior) {
            printf("Seu chute foi maior que o número secreto!\n");
        } else {
            printf("Seu chute foi menor que o número secreto!\n");
        }


        tentativas++;
        double pontosperdidos = abs(chute - numerosecreto) / (double)2;


        pontos = pontos - pontosperdidos;
    }


    printf("Fim de jogo!\n");

    if(acertou) {
        printf("Você ganhou! \n");
        printf("Você acertou em %d tentativas! \n", tentativas);
        printf("Pontuação: %.1f \n", pontos);
    } else {
        printf("Você perdeu! Tente de novo \n"); 
    }




    return 0;
}

