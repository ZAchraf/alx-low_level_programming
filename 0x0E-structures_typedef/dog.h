#ifndef dog_h
#define dog_h

/**
 * struct dog - a structure declaration
 * @name: white dog's name
 * @owner: his owner
 * @age: his age
 * Description: Poppy is helping us learn about structure
*/
struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
