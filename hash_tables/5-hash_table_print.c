#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to print
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_node;
	unsigned long int i;
	int first;

	if (ht == NULL)
		return;

	first = 1;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node != NULL)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", current_node->key, current_node->value);
			first = 0;
			current_node = current_node->next;
		}
	}
	printf("}\n");
}
