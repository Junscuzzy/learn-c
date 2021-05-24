#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
		// Demander des infos a l'user dans la console
		int age = 0;
		printf("Avant de poser une question, age vaut %d \n", age);
		printf("Quel age as-tu ? ");
		scanf("%d", &age);
		printf("Ok, tu as %d ans !\n", age);

    return 0;
}
