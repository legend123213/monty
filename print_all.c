#include "monty.h"

/**
*fun_print_all - a function that prints all the stack
*@head: stack head
*@c: no used
* Return: nothing
*/
void fun_print_all(stack_t **head, unsigned int c)
{

		stack_t *h;

		(void)c;



		h = *head;

		if (h == NULL)

			return;

		while (h)

		{

			printf("%d\n", h->n);

			h = h->next;

		}

}
