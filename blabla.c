#include <stdio.h>

static int is_set(char c, char *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
            return (1);
        else
            i++;
	}
	return (0);
}

int main()
{
    char *str;
    char *set;
    int i;
    int res;

    str = "ooc,lol,oooc";
    set = "oc,";
        
    res = 2;
    i = 0;
    while(str[i])
    {
        res = is_set(str[i], set);
        printf("%d\n", res);
        i++;
    }
}