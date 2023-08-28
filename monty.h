#ifndef MONTY_H
#define MONTY_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>




#define differentiate "\r\t\n"



/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;



void dl_pall_stack(stack_t **arg_compile, unsigned int _idx_count);
void dl_pint_stack(stack_t **arg_compile, unsigned int  _idx_count);
void dl_pop_stack(stack_t **arg_compile, unsigned int _idx_count);
void fun_psh(stack_t **arg_compile, char *char_var, unsigned int _idx_count);
void dl_swap_stack(stack_t **arg_compile, unsigned int _idx_count);
void dl_stacknop(stack_t **arg_compile, unsigned int _idx_count);
unsigned int dl_size(stack_t **arg_compile);
int dl_stack_opc(stack_t **arg_compile, char *stack_functionality, int _idx_count);
void dl_trd(stack_t *arg_compile);


#endif
