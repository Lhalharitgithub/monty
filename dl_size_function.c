#include "monty.h"
/**
* dl_size - Initialised a custom function named dl_size.
* @arg_compile: Argument of the custom function.
* Return: Returns the initialised variable named named int_uns
**/
unsigned int dl_size(stack_t **arg_compile)
{
	stack_t *DlVar;
	unsigned int int_uns = 0;

	DlVar = *arg_compile;
	while (DlVar)
	{
	DlVar = DlVar->next;
	int_uns++;
	}
	return (int_uns);
}
