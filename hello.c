#include <stdio.h>
#include <stdlib.h>

// Macros
#define RACONTER_SA_VIE()   printf("Coucou, je m'appelle Brice\n"); \
                            printf("J'habite a Nice\n"); \
                            printf("J'aime la glisse\n");

#define MAJEUR(age) if (age >= 18) \
                    printf("Vous etes majeur\n");

int main(int argc, char *argv[]) {
	// Demander des infos a l'user dans la console
	int age = 0;
	printf("Avant de poser une question, age vaut %d \n", age);
	printf("Quel age as-tu ? ");
	scanf("%d", &age);
	printf("Ok, tu as %d ans !\n", age);

	printf("Erreur a la ligne %d du fichier %s\n", __LINE__, __FILE__);
	printf("Ce fichier a ete compile le %s a %s\n", __DATE__, __TIME__);

	RACONTER_SA_VIE()

	MAJEUR(age)

    return 0;
}
