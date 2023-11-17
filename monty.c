#include "monty.h"
/**
 * main - main func for monty interrprete
 * @ac: num of arguments
 * @av: verctor args
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	stack_t *stack;

	stack = NULL;
	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		error_exit(&stack);
	}
	read_file(av[1], &stack);
	free_dlistint(stack);
	free_stack(stack);
	return (0);
}

void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
