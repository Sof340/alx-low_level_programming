#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Short description
 * @name: First member
 * @owner: Second member
 * @age: Third member
 *
 * Description: Longer description
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
#endif

#ifndef FUNCTION
#define FUNCTION
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

