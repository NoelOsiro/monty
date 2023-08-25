#include <stdio.h>
#include "monty.h"

/**
 * rotl - Rotates a stack_t linked list to the top.
 * @stack: A pointer to the top mode node of a stack_t linked list.
 * @line_number: The current working line number of a Monty bytecodes file.
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *new_top = (*stack)->next;
	stack_t *current = new_top;
	(void)line_number;

	if (*stack == NULL || (*stack)->next == NULL)
		return;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = *stack;
	(*stack)->next = NULL;
	*stack = new_top;
}
