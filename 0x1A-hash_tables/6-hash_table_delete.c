#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: the hash table
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_table_t *hash_table = ht;
	hash_node_t *hash_node, *tmp;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			hash_node = ht->array[i];
			while (hash_node != NULL)
			{
				tmp = hash_node->next;
				free(hash_node->key);
				free(hash_node->value);
				free(hash_node);
				hash_node = tmp;
			}
		}
	}
	free(hash_table->array);
	free(hash_table);
}
