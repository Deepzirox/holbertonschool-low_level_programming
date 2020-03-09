#ifndef DOG_H_
#define DOG_H_
/**
 * struct dog - Django
 * @name: pet name
 * @age: pet age
 * @owner: pet owner
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
#endif
