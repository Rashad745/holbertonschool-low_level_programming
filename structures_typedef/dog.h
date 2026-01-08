#ifndef DOG_H
#define DOG_H

#include <stdlib.h> /* for NULL */

/**
 * struct dog - defines a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: This structure stores information about a dog,
 * including its name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Typedef for convenience */
typedef struct dog dog_t;

/* Function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */

