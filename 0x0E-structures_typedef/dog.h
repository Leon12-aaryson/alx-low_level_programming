#ifndef DOG_H
#define DOG_H

/**
*struct dog - This is a structure
*
*@name: is a struct object
*@age: is an age object
*@owner: is for age variable
*
*Return: Always return 0
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
