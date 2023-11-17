#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
*struct stack_s - a program that doubly linked list
*representation of a stack (or queue)
*@n: integer
*@prev: points to the previous element of the stack (or queue)
*@next: points to the next element of the stack (or queue)
*Description: doubly linked list node structure
*for stack, queues, LIFO, FIFO Holberton project
*/
typedef struct stack_s
{

		int n;

		struct stack_s *prev;
		struct stack_s *next;
} stack_t;

/**
*struct bus_s - a program of variables -args, file, line content
*@arg: value
*@file: pointer to monty file
*@content: line content
*@lifi: flag change stack <-> queue
*Description: carries values through the program
*/
typedef struct bus_s

{

		char *arg;

		FILE *file;

		char *content;

		int lifi;

}  bus_t;

extern bus_t bus;

/**
*struct instruction_s - a program of opcode and its function
*@opcode: the opcode
*@f: function to handle the opcode
*Description: opcode and its function
*for stack, queues, LIFO, FIFO Holberton project
*/
typedef struct instruction_s
{

		char *opcode;

		void (*f)(stack_t **stack, unsigned int line_number);

} instruction_t;
char *_reallocation(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t get_stdin(char **lineptr, int file);
char  *clean_line(char *content);
void fun_push(stack_t **head, unsigned int number);
void fun_print_all(stack_t **head, unsigned int number);
void fun_print_int(stack_t **head, unsigned int c);

int execution(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stack(stack_t *head);
void fun_pop(stack_t **head, unsigned int counter);
void fun_swaps(stack_t **head, unsigned int counter);
void fun_addition(stack_t **head, unsigned int counter);
void fun_no_program(stack_t **head, unsigned int c);
void fun_subs(stack_t **head, unsigned int counter);
void fun_divi(stack_t **head, unsigned int c);
void fun_mult(stack_t **head, unsigned int counter);
void fun_modu(stack_t **head, unsigned int c);
void fun_print_char(stack_t **head, unsigned int counter);
void fun_print_string(stack_t **head, unsigned int counter);
void fun_rotate_s(stack_t **head, unsigned int counter);
void fun_rotate_bs(stack_t **head, __attribute__((unused)) unsigned int counter);
void add_node(stack_t **head, int n);
void add_queue(stack_t **head, int n);
void fun_queue(stack_t **head, unsigned int counter);
void fun_stack(stack_t **head, unsigned int counter);
#endif
