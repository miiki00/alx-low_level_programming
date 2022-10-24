#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

int _putchar(char);
size_t print_listint(const listint_t *);
size_t listint_len(const listint_t *);
listint_t *add_nodeint(listint_t **, int);
listint_t *add_nodeint_end(listint_t **, const int);
void free_listint(listint_t *);
void free_listint2(listint_t **);
int pot_listint(listint_t **);
listint_t *get_nodeint_at_index(listint_t *, unsigned int index);
int sum_listint(listint_t *head);
listint_t *inser_nodeint_at_index(listint_t **, unsigned int, int n);
int delete_nodeint_at_index(listint_t **, unsigned int);

#endif
