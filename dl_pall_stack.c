#include "monty.h"
/**
*dl_pall_stack - custom funtion
*@_idx_count: Argument of the custom function.
*@arg_compile: Argument of the custom function.
*Return: No returns.
*/
void dl_pall_stack(stack_t **arg_compile, unsigned int __attribute__((unused)) _idx_count)
{
	stack_t *DlVar = *arg_compile;

	if (arg_compile == NULL || *arg_compile == NULL)
	return;

	while (DlVar != NULL)
	{
	printf("%d\n", DlVar->n);
	DlVar = DlVar->next;
	}
}
