#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array in the hash table
 * Return: A pointer to the hash table that was created.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL || size == 0)
		return (NULL);
	table->array = malloc(sizeof(void *) * size);
	if (table->array == NULL)
		return (NULL);
	table->size = size;

	/*Initializes array slots to NULL*/
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
