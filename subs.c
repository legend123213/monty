#include "monty.h"

/**
*fun_subs- a function that serves as subtration
*@head: stack head
*@c: line_number
*Return: nothing
*/
void fun_subs(stack_t **head, unsigned int c)
{
		stack_t *aux;

		int sus, nodes;

		aux = *head;
		for (nodes = 0; aux != NULL; nodes++)
			aux = aux->next;
		if (nodes < 2)
		{
			fprintf(stderr, "L%d: can't sub, stack too short\n", c);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
		aux = *head;
		sus = aux->next->n - aux->n;
		aux->next->n = sus;
		*head = aux->next;
		free(aux);
}
