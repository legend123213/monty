#include "monty.h"

/**
*fun_rotate_s - a function that rotates the stack to the top
*@head: stack head
*@c: line_number
*Return: nothing
*/
void fun_rotate_s(stack_t **head,  __attribute__((unused)) unsigned int c)

{

		stack_t *tmp = *head, *aux;



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
