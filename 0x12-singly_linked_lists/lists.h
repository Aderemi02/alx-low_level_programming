#ifndef LIST_H
#define LIST_H
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct singly list_t;
/**
 * struct singly - defining the datatype
 * @str: pointer to a string
 * @len: length of the string
 * @next: pointer to the next node
 */

struct singly
{
	char *str;
	int len;
	struct singly *next;
};

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);

#endif
