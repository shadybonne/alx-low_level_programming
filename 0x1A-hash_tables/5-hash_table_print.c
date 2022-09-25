#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 *
 * @ht: the hash table
 *
 * Return: NULL if ht is NULL
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *hash_node;
	unsigned char flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");

			hash_node = ht->array[i];
			while (hash_node != NULL)
			{
				printf("'%s': '%s'", hash_node->key, hash_node->value);
				hash_node = hash_node->next;
				if (hash_node != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
