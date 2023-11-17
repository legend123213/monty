#include "monty.h"

/**
*fun_pop - a funtion that prints the top
*@head: stack head
*@c: line_number
*Return: nothing
*/
void fun_pop(stack_t **head, unsigned int c)
{

		stack_t *h;



		if (*head == NULL)

		{

			fprintf(stderr, "L%d: can't pop an empty stack\n", c);

			fclose(bus.file);

			free(bus.content);

			free_stack(*head);

			exit(EXIT_FAILURE);

		}

		h = *head;

		*head = h->next;

		free(h);

}
