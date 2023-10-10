#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - this structure is called dog.
 * @name : name of the dog.
 * @age : age of the dog.
 * @owner : owner of the dog.
 *
 * Description: It contains the name and age of the dog
 * and the name of the dog's owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* #ifndef _DOG_H_ */
