#include "../includes/stack.h"
#include <stdlib.h>
#include <stdio.h>

t_elt   *create_elt(int data)
{
    t_elt   *elt;

    elt = malloc(sizeof(t_elt));
    elt->data = data;
    elt->prev = NULL;
    elt->next = NULL;
    return (elt) ;
}

void    push_elt(t_elt **first_elt, t_elt *elt)
{
    if (!*first_elt)
        *first_elt = elt;
    else if ((*first_elt)->prev == NULL)
    {
        elt->prev = *first_elt;
        elt->next = *first_elt;
        (*first_elt)->prev = elt;
        (*first_elt)->next = elt;
        *first_elt = elt;
    }
    else
    {
        elt->prev = (*first_elt)->prev;
        elt->next = *first_elt;
        elt->prev->next = elt;
        elt->next->prev = elt;
        *first_elt = elt;
    }
}

t_elt   *pop_elt(t_elt **first_elt)
{
    t_elt   *res;

    res = *first_elt;
    res->next->prev = res->prev;
    res->prev->next = res->next;
    res->next = NULL;
    res->prev = NULL;
    return (res);
}

int     main()
{
    t_elt   *stack;

    stack = NULL;
    for (int i = 0; i < 10; i++)
    {
        t_elt *tmp = create_elt(i);
        push_elt(&stack, tmp);
    }

    t_elt   *tmp = stack;
    printf("%d\n", tmp->data);
    tmp = tmp->next;
    while (tmp != stack)
    {
        printf("%d\n", tmp->data);
        tmp = tmp->next;
    }
}
