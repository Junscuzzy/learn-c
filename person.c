#include <stdio.h>
#include <stdlib.h>
#include "person.h"

#define PERSON_COUNT 3

int main(int argc, char *argv[]) {
	Person person[PERSON_COUNT];

	for (size_t i = 0; i < PERSON_COUNT; i++) {
		printf("Player %zu:\n", i + 1);
		printf("First name: ");
		scanf("%s", person[i].firstName);
		printf("Last name: ");
		scanf("%s", person[i].lastName);
		printf("---\n");
	}

	printf("In my team, there are:");

	for (size_t i = 0; i < PERSON_COUNT; i++){
		printf(" %s %s", person[i].firstName, person[i].lastName);

		if (i + 2 == PERSON_COUNT) {
			printf(" and");
		} else {
			printf(",");
		}	
	}

	printf(" nice to meet you!\n");
	
    return 0;
}
