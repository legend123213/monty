#include "monty.h"

/**
*fun_print_char - prints the character at the top of the stack,
*followed by a new line
*@head: stack head
*@c: line_number
*Return: no return
*/

void fun_print_char(stack_t **head, unsigned int c)
{
		stack_t *h;

		h = *head;

		if (!h)
		{
			fprintf(stderr, "L%d: can't pchar, stack empty\n", c);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
		if (h->n > 127 || h->n < 0)
		{
			fprintf(stderr, "L%d: can't pchar, value out of range\n", c);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
		printf("%c\n", h->n);
}
