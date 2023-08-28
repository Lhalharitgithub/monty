#include "monty.h"
/**
* dl_stack_opc - Initialised a custom function.
* @arg_compile: Argument of the custom function named dl_stack_opc.
* @stack_functionality: Argument of the custom function named dl_stack_opc.
* @_idx_count: Argument of the custom function named dl_stack_opc.
* Return: Returns the value 1.
**/
int dl_stack_opc(stack_t **arg_compile, char *stack_functionality, int _idx_count)
{
	int int_var;

	instruction_t stack_opc[] = {
	{"pall", dl_pall_stack},
	{"pop", dl_pop_stack},
	{"swap", dl_swap_stack},
	{"pint", dl_pint_stack},
	{NULL, NULL}
	};

	for (int_var = 0; stack_opc[int_var].opcode; int_var++)
	{
	if (strcmp(stack_functionality, stack_opc[int_var].opcode) == 0)
	{
	(stack_opc[int_var].f)(arg_compile, _idx_count);
	return (EXIT_SUCCESS);
	}
	}
	fprintf(stderr, "L%d: Argument incorrect %s\n", _idx_count, stack_functionality);
	exit(EXIT_FAILURE);
}


/**
* main - main c function for monty implementation.
* @argc: Argument of the main c function.
* @argv: Argument of the main c function.
* Return: Returns 0.
**/

int main(__attribute__((unused)) int argc, char const *argv[])
{
	FILE *var_pnt;
	char *_pnt = NULL, *stack_functionality, *char_var;
	size_t sm_v = 0;
	int _idx_count = 0;
	stack_t *arg_compile = NULL, *DlVar;

	if (argc != 2)
	{
	fprintf(stderr, "Monty file usage\n");
	return (EXIT_FAILURE);
	}
	var_pnt = fopen(argv[1], "r");
	if (var_pnt == NULL)
	{
	fprintf(stderr, "Error: file cannot be accessed %s\n", argv[1]);
	exit(1);
	}
	while ((getline(&_pnt, &sm_v, var_pnt)) != -1)
	{
	_idx_count++;
	stack_functionality = strtok(_pnt, differentiate);
	if (stack_functionality == NULL || stack_functionality[0] == '#')
	continue;
	if (!strcmp(stack_functionality, "nop"))
	continue;
	else if (!strcmp(stack_functionality, "push"))
	{
	char_var = strtok(NULL, differentiate);
	fun_psh(&arg_compile, char_var, _idx_count);
	}
	else
	dl_stack_opc(&arg_compile, stack_functionality, _idx_count);
	}
	fclose(var_pnt);
	free(_pnt);
	while (arg_compile != NULL)
	{
	DlVar = arg_compile;
	arg_compile = arg_compile->next;
	free(DlVar);
	}
	return (0);
}

/**
* dl_trd - initialised a Custom function
* @arg_compile: Argument of the custom function
**/
void dl_trd(stack_t *arg_compile)
{
	stack_t *tt;

	while (arg_compile != NULL)
	{
	tt = arg_compile->next;
	free(arg_compile);
	arg_compile = tt;
	}
}
