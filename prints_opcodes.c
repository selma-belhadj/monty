#include "monty.h"
/**
 * pall - print all nodes in stack
 * @h: head of list
 * @line_number: bytecode line number
 */
void pall(stack_t **h, unsigned int line_number)
{
	stack_t *tmp = NULL;

	if (!h || !*h)
		return;

	(void) line_number;
	tmp = *h;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}

/**
 * pint - print top node in stack
 * @h: head of list
 * @line_number: bytecode line number
 */
void pint(stack_t **h, unsigned int line_number)
{
	if (!h || !*h)
	{
		printf("L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*h)->n);

}
/**
 * nop - do nothing
 * @h: head of list
 * @line_number: bytecode line number
 */
void nop(stack_t **h, unsigned int line_number)
{
	(void) h;
	(void) line_number;
}
/**
 * pchar - print top node in stack as ascii letter
 * @h: head of list
 * @line_number: bytecode line number
 */
void pchar(stack_t **h, unsigned int line_number)
{
	if (!h || !*h)
	{
		printf("L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (((*h)->n) >= 0 && ((*h)->n) <= 127)
		printf("%c\n", (*h)->n);
	else
	{
		printf("L%u: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}

}
