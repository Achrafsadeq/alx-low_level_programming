#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure representing a dog
 * @name: pointer to a character representing the dog's name
 * @age: float representing the dog's age
 * @owner: pointer to a character representing the dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
