#include <stdio.h>


int main() {   

    int resultado = 0;

    for(int i = 1; i <= 100; i++) {
        resultado = resultado + i;
    }

    printf("%d \n", resultado);

    return 0;
}

