#include <stdio.h>
#include <stdlib.h> 

int main() {
    int a, b, sum;

    printf("Entrez la valeur de a : ");
    scanf("%d", &a);

    printf("Entrez la valeur de b : ");
    scanf("%d", &b);

    sum = a + b;

    printf("La somme de %d + %d = %d\n", a, b, sum);


    return 0;
}

