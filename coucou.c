static int find_numb_strings(char const *s, char c)
{
    int i;
    int nbrWords;

    i = 0;
    nbrWords = 0;
    while (s[i])
    {
        while (s[i] != c)
        {
            if (s[i + 1] == c || s[i + 1] == '\0')
                nbrWords++;
            i++;
        }
        i++;
    }
    return (nbrWords);
}

#include <stdio.h>

int main()
{
    char *s = ";;lol;lol;";
    char c = ';';
    int nbr;

    nbr = find_numb_strings(s, c);
    printf("%d\n", nbr);
}