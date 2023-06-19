#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - dog description
 * @name: name of dog
 * @age: age of dog
 * @owner: owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* ifndef _DOG_H_ */
