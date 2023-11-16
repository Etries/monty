#include "monty.h"
int sq_flag;
/**
 * main - main func for monty interrprete
 * @ac: num of arguments
 * @av: verctor args
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	stack_t *stack;

	sq_flag = 0;
	stack = NULL;
	if (ac != 2)
	{
		printf("USAGE: monty file\n");
		error_exit(&stack);
	}
	read_file(av[1], &stack);
	free_dlistint(stack);
	return (0);
}
