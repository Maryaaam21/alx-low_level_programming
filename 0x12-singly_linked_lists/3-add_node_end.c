#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node to the end of the list
 * @head: represents the head of the node
 * @str: the string
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)

{
	list_t *newestnode, *tmp;
	unsigned int i, count = 0;

	newestnode = malloc(sizeof(list_t));
	if (newestnode == NULL)
		return (NULL);

	newestnode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;

	newestnode->len = count;
	newestnode->next = NULL;
	tmp = *head;

	if (tmp == NULL)
		*head = newestnode;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newestnode;
	}
	return (*head);
}
