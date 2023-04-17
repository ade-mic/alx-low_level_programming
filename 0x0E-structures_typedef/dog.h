#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - dog struct
 * @name: char type
 * @age: float type
 * @owner: char type
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* _DOG_H_ */
