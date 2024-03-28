#include "monty.h"

/**
 * f_rotl - rotates the stack to move the top element to the bottom
 * @head: pointer to the head of the stack
 * @counter: line number
 * Return: nothing
 */
void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head;
	stack_t *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	aux = (*head)->next;

	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux;
}
