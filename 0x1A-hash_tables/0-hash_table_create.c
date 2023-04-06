#include "hash_tables.h"

/*
 * Description : hash _table_create - creates a hash table
 * @size: The size of the array
 * returns ; if error occurs return -- NULL.:wq
 *
 * else returns the pointer to the new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

			ht->size = size;
			ht->array = malloc(sizeof(hash_node_t) * size);
			if (ht->array == NULL)
				return (NULL);

			for (int i = 0; i < ht->size; i++)
				ht->array[i] = NULL;
			return (ht);
}
