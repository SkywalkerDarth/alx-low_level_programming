#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - structure of a dog
 * @name: dogs name
 * @age: dogs age
 * @owner: owner of the dog
 * Description: data structure for a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Typedef for strut dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
