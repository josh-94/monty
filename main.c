#include "monty.h"

stackt_t *head;

/**
 * main - principal
 * @argc: number parameters received.
 * @argv: list arguments.
 *
 * Return: if success, EXIT_SUCCESS
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	head = NULL; /*Create stack*/
	parse_file(argv[1]);
	free_stack(head);
	return (0);
}
