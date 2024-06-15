#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
    int lenl, len = 0, n, temp;

    while (s[len] != '\0')
    {
        len++;
    }

    lenl = len - 1;
    
    for (n = 0; n < len / 2; n++)
    {
        temp = s[n];
        s[n] = s[lenl];
        s[lenl--] = temp;
    }
}
