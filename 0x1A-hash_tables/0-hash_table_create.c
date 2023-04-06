#include "hash_tables.h"
/*
 * creates a hash table
 * @size: The size of the array
 *
 * returns ; if error occurs return --Null
 * else returns the pointer to the new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size);
{
	hash_table_t *ht;

	unasigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == Null)
		return (Null)

			ht->size = size;
			ht->array = (sizeof(hash_node_t *) * size));

			for (int i = 0; i < ht->size; i++)
				ht->array[i] = NULL;
			return (ht);
}
