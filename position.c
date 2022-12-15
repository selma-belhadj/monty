#include "monty.h"
/**
 * swap - swap locations of previous stack with the top stack
 * @h: node to be swapped
 * @line_number: node number
 */
void swap(stack_t **h, unsigned int line_number)
{
	stack_t *tmp = NULL;

	if (*h == NULL || (*h)->next == NULL)
	{
		printf("L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = (*h)->next;
	if (tmp->next != NULL)
	{
		(*h)->next = tmp->next;
		(*h)->next->prev = *h;

	}
	else
	{
		tmp->prev->prev = tmp;
		tmp->prev->next = NULL;
	}
	tmp->prev = NULL;
	tmp->next = *h;
	(*h) = tmp;
}
/**
 * rotl - rotate so top of stack becomes last one, second becomes first one
 * @h: node to be rotated
 * @line_number: node number
 */
void rotl(stack_t **h, unsigned int line_number)
{
	stack_t *tmp;

	(void) line_number;

	if ((*h)->next != NULL)
	{
		tmp = *h;
		while (tmp->next != NULL)
			tmp = tmp->next;
		(*h)->prev = tmp;
		tmp->next = *h;
		(*h)->next->prev = NULL;
		*h = (*h)->next;
		tmp->next->next = NULL;
	}
}
/**
 * rotr - rotate so only bottom node of stack becomes first one
 * @h: node to be rotated
 * @line_number: node number
 */
void rotr(stack_t **h, unsigned int line_number)
{
	stack_t *tmp;

	(void) line_number;

	if ((*h)->next != NULL)
	{
		tmp = *h;
		while (tmp->next != NULL)
			tmp = tmp->next;
		(*h)->prev = tmp;
		tmp->next = *h;
		tmp->prev->next = NULL;
		tmp->prev = NULL;
		(*h) = (*h)->prev;
	}
}
