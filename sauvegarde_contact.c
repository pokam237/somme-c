#include <stdio.h>

int main() {
    char noms[100][50];       // 100 noms max
    char numeros[100][20];    // 100 numéros max
    int i;

for(i=0; i<2; i++){
	printf("entrez les nom du contact\n");
	scanf("%s", &noms[i]);
	printf("entrez le numero du contact\n");
	scanf("%s", &numeros[i]);

}

   printf("\nListe des contacts :\n");
    for(i = 0; i <2; i++) {
        printf("Nom: %s, Numéro: %s\n", noms[i], numeros[i]);
    }

    return 0;
}

