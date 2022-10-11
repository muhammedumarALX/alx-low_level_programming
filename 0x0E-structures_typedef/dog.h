#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - structure that stores some information of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: struct called "dog" that stores its name, its age
 * and them owners name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
