#include "monty.h"
/**
*dl_pint_stack - custom function for pint opcode
*@arg_compile: argument of the function
*@_idx_count: arguement of the function
*Return: no returns
*/
void dl_pint_stack(stack_t **arg_compile, unsigned int __attribute__((unused)) _idx_count)
{
if (arg_compile == NULL || *arg_compile == NULL)
{
fprintf(stderr, "L%d: can't pint, stack empty\n", _idx_count);
exit(EXIT_FAILURE);
}
printf("%d\n", (*arg_compile)->n);
}
