/*
LeetCode - Find the Index of the First Occurrence in a String
*/

#include <string.h>

int strStr(char *haystack, char *needle)
{
    int n = strlen(haystack);
    int m = strlen(needle);

    /* If needle is empty */
    if(m == 0)
        return 0;

    for(int i = 0; i <= n - m; i++)
    {
        int j;

        /* Compare substring */
        for(j = 0; j < m; j++)
        {
            if(haystack[i + j] != needle[j])
            {
                break;
            }
        }

        /* Match found */
        if(j == m)
        {
            return i;
        }
    }

    return -1;
}
