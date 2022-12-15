#include "monty.h"
/**
 * add_end_node - add node to front of doubly linked list
 * @h: pointer to head of list
 * @n: node data
 * Return: 0 if success, -1 if failed
 */
int add_end_node(stack_t **h, int n)
{
	stack_t *new;

	if (!h)
		return (-1);

	/* malloc and set new node data */
	new = malloc(sizeof(struct stack_t));
	if (!new)
	{
		printf("Error: malloc failed");
		return (-1);
	}
	new->n = n;

	/* account for empty linked list */
	if (*h == NULL)
	{
		*h = new;
		new->next = NULL;
		new->prev = NULL;
	}
	else /* insert to front */
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
	}
	return (0);
}
