#ifndef DEF_PERSON
#define DEF_PERSON

// It's an alias to use directly "Person" ...
// ... instead of "struct Person" on initialisation
typedef struct Person Person;

// Structure is like an interface, an object
struct Person
{
    char firstName[100];
    char lastName[100];
    int age;
};

#endif
