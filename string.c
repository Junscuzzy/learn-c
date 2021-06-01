#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void displayString1();
void displayString2();
void askName();

int main(int argc, char *argv[]) {
    char letter = 0;
    int length = 0;
    char string[] = "Hello";

    // Ask a letter and display a letter
    printf("Type a letter then Enter: ");
    scanf("%c", &letter);
    printf("You have typed on \"%c\" that's corresponding to the ASCII code: %d\n", letter, letter);
    askName();

    // String is array is pointors
    displayString1();
    displayString2();

    // The following instructions use the <string.h> library
    length = strlen(string);
    printf("The word \"%s\" has %d caracters\n", string, length);

    // // Copy string
    // // // Make sure string1 is enough all
    char string1[100] = "Hello ", string2[] = "Julien";
    // // // Concat string2 in string1, string1 will be muted
    strcat(string1, string2);
    printf("string1 (Concat): %s\n", string1);
    printf("string2 (Inital): %s\n", string2);

    // // Difference between string, return diff count
    if (strcmp(string1, string2) == 0) {
        printf("string1 (%s) === string2 (%s)\n", string1, string2);
    } else {
        printf("string1 (%s) !== string2 (%s)\n", string1, string2);
    }

    // // Find a char (return a pointers to the first matched char)
    char longString[] = "Test's text", *rest = NULL;

    rest = strchr(longString, 's');
    if (rest != NULL) {
        printf("After \"s\", we found: \"%s\"\n", rest);
    }

    // // Other
    // // - Find the first match between many letters
    // // // strpbrk(string, 'abc'); match a, b or c

    // // - Find string in string
    // // // Note: "" means string (many letters), '' means char (One letter)
    // // // char* strstr(const char* "that test text", const char* "test");
    
    // // - Write in a string
    char targetString[100];
    int age = 25;
    sprintf(targetString, "Tu as %d ans !\n", age);
    printf("%s", targetString);

    return 0;
}

void displayString1() {
    char string[6];

    string[0] = 'H';
    string[1] = 'e';
    string[2] = 'l';
    string[3] = 'l';
    string[4] = 'o';
    string[5] = '\0';

    printf("displayString1() -> %s\n", string);
}

void displayString2() {
    // Note: This following line only works for the initialisation
    char string[] = "Hello";

    printf("displayString2() -> %s\n", string);
}

void askName() {
    char name[100];

    printf("Hi, what's your name? ");
    // Note: The user can't use space
    scanf("%s", name);
    printf("Hi %s, nice to meet you!\n", name);
}
