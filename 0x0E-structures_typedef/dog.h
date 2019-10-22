#ifndef DOG_H
#define DOG_H


/**
 * struct dog - Contains data for a doge.
 *
 * @name: Name of the doge.
 * @age: How old is the good boy/girl.
 * @owner: Who owns the doge.
 *
 * Description - This structure contains relevant information about a dog.
 *
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;

} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

int _putchar(char c);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
