#include "monty.h"

/**
* dl_swap_stack - A custom function.
* @arg_compile: Argument to the custom function.
* @_idx_count: Argument to the custom function.
* Return: Returns nothing.
**/
void dl_swap_stack(stack_t **arg_compile, unsigned int _idx_count)
{
	int var;

	if (dl_size(arg_compile) < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", _idx_count);
		exit(EXIT_FAILURE);
	}
	var = (*arg_compile)->n;
	(*arg_compile)->n = (*arg_compile)->next->n;
	(*arg_compile)->next->n = var;
}
