#include "function_pointers.h"

/**
 * print_name - Prints a name using a function pointer
 * @name: Name to print
 * @f: Pointer to function that formats/prints the name
 *
 * Description: This function takes a name and a function pointer,
 * then calls the function with the name as argument.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
