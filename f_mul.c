#include "monty.h"

/**
 * f_mul - multiplies the top two elements of the stack
 * @head: pointer to the head of the stack
 * @counter: line number
 * Return: nothing
 */
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0;
	int aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->next->n * h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
