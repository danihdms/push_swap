#ifndef STACK_H
# define STACK_H 

# include <stddef.h>

typedef struct  s_elt
{
    int                 data;
    struct s_elt    *prev;
    struct s_elt    *next;
} t_elt;

t_elt   *create_elt(int data);

void    push_elt(t_elt **first_elt, t_elt *elt);

t_elt   *pop_elt(t_elt **first_elt);

#endif
