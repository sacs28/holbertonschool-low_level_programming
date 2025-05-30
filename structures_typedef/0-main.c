#include <stdio.h>
#include "dog.h"

/**
 * main - check to the code
 *
 * Declare a dog variable, Initialize the members
 *
 * Access and print the values
 *
 * Return: 0
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "Coco";
	my_dog.age = 4.5;
	my_dog.owner = "Miguel";

	printf("Dog name: %s\n", my_dog.name);
	printf("Dog age: %.1f\n", my_dog.age);
	printf("Owner: %s\n", my_dog.owner);

	return (0);
}
