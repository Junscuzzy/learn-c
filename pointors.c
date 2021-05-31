#include <stdio.h>
#include <stdlib.h>

// I'm the prototype of splitTime function; 
// I need to live in a *.h file (but here we are small)
void splitTine(int *hours, int *minutes);

int main(int argc, char *argv[]) {
    int hours = 0, minutes = 90;

    
    printf("The value of my var \"hours\" is %d and its address is %p\n", hours, &hours);

    // A pointer is a variable for save an address, not its value
    // So, &hours is the address of hours, save that as a pointer
    int *hoursPointer = &hours;

    printf("Address of the pointer: %p, and its value: %d\n", hoursPointer, *hoursPointer);

    splitTine(hoursPointer, &minutes);

    printf("%d hours and %d minutes\n", hours, minutes);

    return 0;
}

void splitTine(int *hours, int *minutes) {
    // Change the value of the pointer
    *hours = *minutes / 60;  // 90 / 60 = 1
    *minutes = *minutes % 60; // 90 % 60 = 30
}