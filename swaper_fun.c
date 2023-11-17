#include "monty.h"

/**
*fun_swaps - a program that adds the top two elements of the stack.
*@head: stack head
*@c: line_number
*Return: nothing
*/
void fun_swaps(stack_t **head, unsigned int c)
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
			fprintf(stderr, "L%d: can't swap, stack too short\n", c);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
		h = *head;

		aux = h->n;
		h->n = h->next->n;
		h->next->n = aux;
}
