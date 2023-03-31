#include "monty.h"
/**
 * swap - swap 2 first nodes
 * @stack: stack
 * @line_number: line number
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *p = (*stack);
	int length = 0;

	while (p != NULL)
	{
		length++;
		p = p->next;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		stack_t *node1 = (*stack);
		stack_t *node2 = (*stack)->next;

		node1->next = node2->next;
		node1->prev = node2;

		node2->prev = NULL;
		node2->next = node1;

		(*stack) = node2;
	}
}
/**
 * add - adds 2 numbers
 * @stack:stack
 * @line_number: line number
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *p = (*stack);
	int length = 0;
	int sum = 0;

	while (p != NULL)
	{
		length++;
		p = p->next;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		sum = (*stack)->n + (*stack)->next->n;
		(*stack)->next->n = sum;
		pop(stack, line_number);
	}
}

/**
 * nop - doesn’t do anything
 * @stack: the pointer to the stack
 * @line_number: line of the file that being trated
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
