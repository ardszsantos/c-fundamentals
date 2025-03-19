#include <stdio.h>


int main() {   
    int numero;

    printf("Calcular a tabuada de qual numero?\n");
    scanf("%d", &numero);

    printf("Calculando a tabuada do número:  %d\n", numero);

    for (int i = 1; i <=10 ; i++) {

        int resultado = i * numero;

        printf("%d X %d = %d  \n", numero,  i, resultado);
    }
}

#include <stdio.h>
