#ifndef DOG_H_
#define DOG_H_
/**
* struct dog- dog details
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
*/

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif /*DOG_H_*/
