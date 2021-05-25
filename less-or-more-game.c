#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Return a random number between 1 and "max"
int getRandomNumber(unsigned int max) {
    const unsigned int MIN = 1;
    return (rand() % (max - MIN + 1)) + MIN;
}

void gamePlay(int max) {
    int target = getRandomNumber(max);
	int answer = 0;
    int playCount = 0;
    int success = 0;

    printf("Let's started buddy, devine the number between 1 and %d. Good luck!\n\n", max);

    while (!success) {
        playCount++;

        printf("What is the number? ");
        scanf("%d", &answer);

        if (answer == target) {
            success = 1;
        } else {
            printf(answer > target ? "Smaller\n" : "Bigger\n");
        }
    }

    printf("Congratulation! You have found the number in %d moves \n", playCount);
}

int chooseLevel () {
    int level = 0;
    int max = 0;

    printf("Hi player, are you crazy ? Oh yeah I know, type a number to select a level of dificulty\n");
    printf("1. Beginner (default)\n");
    printf("2. Intermediaire\n");
    printf("3. Advanced\n");

    scanf("%d", &level);

    switch (level) {
        case 2: max = 1000; break;
        case 3: max = 10000; break;
        default: max = 100; break;
    }

    return max;
}

int main(int argc, char *argv[]) {
    // Random util lib initialization, should only be called once.
    srand(time(NULL));

    int playAgain = 0;
    int userAnswer = 0;
    int max = chooseLevel();

    do {
        gamePlay(max);

        printf("Do you want try again ?\n");
        printf("1. Yes\n");
        printf("2. No\n");
        scanf("%d", &userAnswer);

        // Replay (or quit by default)
        playAgain = userAnswer == 1;

    } while (playAgain);

    printf("\nCiao ciao ciao!\n");
    
    return 0;
}