#include "lists.h"

/**
 * add_nodeint - Starting point
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nn;

	nn = malloc(sizeof(listint_t));
	if (!nn)
		return (NULL);

	nn->n = n;
	nn->next = *head;
	*head = nn;

	return (nn);
}
