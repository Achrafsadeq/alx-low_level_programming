#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to print
 *
 * Description: Prints key/value pairs in the order they appear
 * in the array of the hash table. Format: {'key': 'value', ...}
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	char *separator = "";

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			printf("%s'%s': '%s'", separator, node->key, node->value);
			separator = ", ";
			node = node->next;
		}
	}
	printf("}\n");
}
