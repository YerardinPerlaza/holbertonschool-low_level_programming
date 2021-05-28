#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: table to delete
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	hash_node_t *tmp_2;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			tmp_2 = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = tmp_2;
		}
	}
	free(ht->array);
	free(ht);
}
