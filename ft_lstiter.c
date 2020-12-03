#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (lst == NULL)
        return (NULL);
    while(lst->next != NULL)
    {
        f(lst->content);
        lst = lst->next;
    }
}