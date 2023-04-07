rinclude "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 * Otherwise - 1.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/* Declaring variables */
	unsigned long int index;
	hash_node_t *new_node, *temp_node;

	if (ht == NULL || key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	 /* Compute the index of the bucket */
	index = key_index((const unsigned char *) key, ht->size);
    /* Check if the key already exists */
	head = ht->array[index];
	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
		{
			/* Key already exists - update the value */
			free(head->value);
			head->value = strdup(value);
			return (1);
		}
		head = head->next;
	}

    /* Key does not exist - create a new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
