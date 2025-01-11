#include <stdio.h>


int main() {
    int x, y;

    printf("Escolha o valor da variavel X: \n");
    scanf("%d", &x);

    printf("Agora escolha o valor da variavel Y: \n");
    scanf("%d", &y);

    int result = x * y;

    printf("O resultado da multiplicação é: %d\n", result);

    return 0;
}

