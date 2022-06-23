#include "function_pointers.h"

/**
  * print_name - call function that is passed in
  * @name: input val for function to call
  * @f: pointer to function to call
  */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
