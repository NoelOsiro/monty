#include <stdio.h>
#include "monty.h"

/**
 * rotr - Rotates a stack_t linked list to the bottom.
 * @stack: A pointer to the top mode node of a stack_t linked list.
 * @line_number: The current working line number of a Monty bytecodes file.
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	stack_t *prev = NULL;
	(void)line_number;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	while (current->next != NULL)
	{
		prev = current;
		current = current->next;
	}

	prev->next = NULL;
	current->next = *stack;
	*stack = current;
}
