#include "monty.h"

/**
*fun_addition - a function that adds the top two elements of the stack.
*@head: head of the stack
*@c: line_number
*Return: no return
*/
void fun_addition(stack_t **head, unsigned int c)
{
		stack_t *h;

		int len = 0, aux;

		h = *head;
		while (h)
		{
			h = h->next;
			len++;
		}
		if (len < 2)
		{
			fprintf(stderr, "L%d: can't add, stack too short\n", c);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
		h = *head;
		aux = h->n + h->next->n;
		h->next->n = aux;
		*head = h->next;
		free(h);
}
