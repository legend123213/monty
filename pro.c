#include "monty.h"

/**
*fun_mult - a function that multiplies the top two
*elements of the stack.
*@head: stack head
*@c: line_number
*Return: no return
*/
void fun_mult(stack_t **head, unsigned int c)
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
			fprintf(stderr, "L%d: can't multiply, stack too short\n", c);
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
