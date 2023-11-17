#include "monty.h"
/**
*fun_modu- a function that computes the rest of the division of the second 
*top element of the stack by the top element of the stack
*@head: stack head
*@c: line_number
*Return: no return
*/
void fun_modu(stack_t **head, unsigned int c)
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
			fprintf(stderr, "L%d: can't mod, stack too short\n", c);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
		h = *head;
		if (h->n == 0)
		{
			fprintf(stderr, "L%d: division by zero\n", c);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
		aux = h->next->n % h->n;
		h->next->n = aux;
		*head = h->next;
		free(h);
}
