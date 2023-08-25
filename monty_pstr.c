#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * pstr - Prints the string starting at the top of a stack_t linked list.
 * @stack: A pointer to the top mode node of a stack_t linked list.
 * @line_number: The current working line number of a Monty bytecodes file.
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	(void)line_number;
	while (current != NULL && current->n != 0 &&
	(current->n > 0 && current->n <= 127))
	{
		putchar(current->n);
		current = current->next;
	}

	putchar('\n');
}
