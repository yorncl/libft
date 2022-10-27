#include "testsuite.h"

// These are just some basic test
// It could probably be better

// builds list from array
t_list* build_list(int* arr, int n)
{
    t_list *list = NULL;
    int* data;

    for (int i = 0; i < n; i++) 
    {
        data = malloc(sizeof(int));
        *data = arr[i];
        t_list* new = ft_lstnew(data);
        ft_lstadd_back(&list, new);
    }
    return list;
}

int mycomp(void* a, void* b)
{
    return  *(int*)a < *(int*)b;
}

int sorted(t_list* list)
{
    while (list->next)
    {
       if (*((int*)list->next->content) < *((int*)list->content))
           return 0;
       list = list->next;
    }
    return 1;
}

int test_sorted(t_list* list)
{
    int r = sorted(list);
    FILE* stream = r ? stdout : stderr;
    fprintf(stream, "[");
    while (list)
    {
        fprintf(stream, " %d", *((int*)list->content));
        list = list->next;
    }
    fprintf(stream, " ]\n");
    fprintf(stream, r ? "OK\n" : "ERROR\n");
    return r;
}

int main(void)
{  
   fprintf(stdout, "===== FT_LSTQUICKSORT ====\n");
   t_list *single; 
   t_list *duo; 
   t_list *odd; 
   t_list *even; 
   
   int data[] = {8,3,5,63,3,6,4,3,99,0,0,980}; //12


    // building list from array
    single = build_list(data, 1);
    duo = build_list(data, 2);
    odd = build_list(data, 7);
    even = build_list(data, 12);
   
   ft_lstsort(NULL, mycomp); // Nothing to sort, don't crash
   ft_lstsort(&single, mycomp);
   ft_lstsort(&duo, mycomp);
   ft_lstsort(&odd, mycomp);
   ft_lstsort(&even, mycomp);
   
   int fails = 0; 
   fails += test_sorted(single);
   fails += test_sorted(duo);
   fails += test_sorted(odd);
   fails += test_sorted(even);

   ft_lstclear(&single, free);
   ft_lstclear(&duo, free);
   ft_lstclear(&odd, free);
   ft_lstclear(&even, free);
   return fails;
}