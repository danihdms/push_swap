#include "stack.h"

#ifdef OPERATIONS_H
# define OPERATIONS_H

void    swap(t_elt **first_elt);

void    swap_both(t_elt **first_a, t_elt **first_b);

void    push(t_elt **first_elt);

void    rotate(t_elt **first_elt);

void    rotate_both(t_elt **first_a, t_elt **first_b);

void    rev_rotate(t_elt **first_elt);

void    rev_rotate_both(t_elt **first_a, t_elt **first_b);

#endif
