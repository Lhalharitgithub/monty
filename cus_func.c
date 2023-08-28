#include "monty.h"
#include <string.h>
/**
*fun_psh - Initialised a custom function.
*@arg_compile: Argument to the custom function.
*@char_var: Argument to the custom function.
*@_idx_count: Argument of the custom function.
*Return: No returns.
*/
void fun_psh(stack_t **arg_compile, char *char_var, unsigned int _idx_count)
{
	stack_t *fhs = NULL;
	int int_var;

	fhs = malloc(sizeof(stack_t));
	if (fhs == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if (char_var == NULL)
	{
		fprintf(stderr, "L%d: usage: fun_psh integer\n", _idx_count);
		exit(EXIT_FAILURE);
	}
	for (int_var = 0; char_var[int_var]; int_var++)
	{
		if (char_var[0] == '-' && int_var == 0)
			continue;
		if (char_var[int_var] < 48 || char_var[int_var] > 57)
		{
			fprintf(stderr, "L%d: usage: fun_psh integer\n", _idx_count);
			exit(EXIT_FAILURE);
		}
	}
	fhs->n = atoi(char_var);
	fhs->prev = NULL;
	fhs->next = NULL;
	if (*arg_compile != NULL)
	{
		fhs->next = *arg_compile;
		(*arg_compile)->prev = fhs;
	}
	*arg_compile = fhs;
}
