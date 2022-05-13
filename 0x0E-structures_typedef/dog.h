#ifndef DOG_H
#define DOG_H
/**
 * struct dog - description dog
 * @name: first element
 * @age: second element
 * @owner: third element
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
int _putchar(char c);
char *_strdup(char *str);
#endif
