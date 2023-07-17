#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic information
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: struct called "dog" that stores it's name,it's age
 * and the name of it's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
