#include "monty.h"
/**
 *dl_pop_stack - custom function.
 *@_idx_count: Arguemt of the custom function.
 *@arg_compile: Argument of the custom function.
 *Return: No returns.
 */
void dl_pop_stack(stack_t **arg_compile, unsigned int _idx_count)
{
	stack_t *var_pnt;
	if (arg_compile == NULL)
	{
	printf("L%u: can't pop an empty stack\n", _idx_count);
	exit(EXIT_FAILURE);
	}
	else if (*arg_compile == NULL)
	{
	printf("L%u: can't pop an empty stack\n", _idx_count);
	exit(EXIT_FAILURE);
	}
	else
	{
	var_pnt = *arg_compile;
	*arg_compile = (*arg_compile)->next;
	free(var_pnt);
	}
	return;
}
