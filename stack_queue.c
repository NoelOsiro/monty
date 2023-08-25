#include <stdio.h>
#include "monty.h"

/**
 * stack_op - Sets the format of a stack_t linked list to stack mode (LIFO).
 * @stack: A pointer to the top mode node of a stack_t linked list.
 * @line_number: The current working line number of a Monty bytecodes file.
 */
void stack_op(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}

/**
 * queue - Sets the format of a stack_t linked list to queue mode (FIFO).
 * @stack: A pointer to the top mode node of a stack_t linked list.
 * @line_number: The current working line number of a Monty bytecodes file.
 */
void queue(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	stack_t *prev = NULL;
	stack_t *next;
	(void)line_number;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*stack = prev;
}
