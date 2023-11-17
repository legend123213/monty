#include "monty.h"

/**
*fun_print_int - a funtion that prints the top
*@head: stack head
*@c: line_number
*Return: nothing
*/

void fun_print_int(stack_t **head, unsigned int c)

{

		if (*head == NULL)

{

			fprintf(stderr, "L%u: can't pint, stack empty\n", c);

			fclose(bus.file);

			free(bus.content);

			free_stack(*head);

			exit(EXIT_FAILURE);

}

		printf("%d\n", (*head)->n);

}
