#ifndef STRUCTS
#define STRUCTS
/**
 * struct dog - description dog
 * @name: first element
 * @age: second element
 * @owner: third element
 */
typedef struct dog
{
char *name;
float *age;
char *owner;
};
#endif

void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
int -putchar(char c)
#endif
