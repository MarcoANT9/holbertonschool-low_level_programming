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

struct dog
{
	char *name;
	float age;
	char *owner;

};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

int _putchar(char c);

#endif
