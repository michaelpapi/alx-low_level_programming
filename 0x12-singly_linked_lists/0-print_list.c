#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_list - prints all elements of a list_t list
 * @h: singly linked list to print
 * Return: no of nodes in list
 */
size_t print_list(const list_t *h)
{
	size_t i;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n" , h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		i++;
	}
	return (i);
}
