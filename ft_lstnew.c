#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *element;

    if (!(element = malloc(sizeof(element))))
        return (NULL);
    element->content = content;
    element->next = NULL;
    return (element);
}