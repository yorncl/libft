#include "libft.h"


void split(t_list* source, t_list** frontRef, t_list** backRef)
{
    t_list* fast;
    t_list* slow;
    slow = source;
    fast = source->next;

    while (fast != NULL) 
    {
        fast = fast->next;
        if (fast != NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }
    }
    *frontRef = source;
    *backRef = slow->next;
    slow->next = NULL;
}

t_list* sort_merged(t_list* a, t_list* b, int (*cmp)(void*, void*))
{
    t_list* result = NULL;

    if (a == NULL)
        return b;
    else if (b == NULL)
        return a;
    if (cmp(a->content, b->content))
    {
        result = a;
        result->next = sort_merged(a->next, b, cmp);
    }
    else
    {
        result = b;
        result->next = sort_merged(a, b->next, cmp);
    }
    return result;
}

void mergesort(t_list** headRef, int (*cmp)(void*, void*))
{
    t_list* head = *headRef;
    t_list* a;
    t_list* b;
    
    if ((head == NULL) || (head->next == NULL))
        return;

    split(head, &a, &b);
    
    mergesort(&a, cmp);
    mergesort(&b, cmp);
    
    *headRef = sort_merged(a, b, cmp);
}

void	ft_lstsort(t_list **list, int (*cmp)(void*, void*))
{
    if (list == NULL)
        return;
    mergesort(list, cmp);
}