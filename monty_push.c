#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * push - Pushes a value to a stack_t linked list.
 * @stack: A pointer to the top mode node of a stack_t linked list.
 * @line_number: The current working line number of a Monty bytecodes file.
 */
void push(stack_t **stack, unsigned int line_number)
{
	char *argument = strtok(NULL, " \t\n");
	stack_t *new_node = malloc(sizeof(stack_t));
	int value = atoi(argument);

	if (argument == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (value == 0 && strcmp(argument, "0") != 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;
	if (*stack != NULL)
	{
		(*stack)->prev = new_node;
	}
	*stack = new_node;
}
