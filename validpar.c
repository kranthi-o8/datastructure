/*
LeetCode - Valid Parentheses
*/

#include <stdbool.h>
#include <string.h>

bool isValid(char *s)
{
    char stack[10000];
    int top = -1;

    for(int i = 0; s[i] != '\0'; i++)
    {
        char ch = s[i];

        /* Push opening brackets */
        if(ch == '(' || ch == '{' || ch == '[')
        {
            stack[++top] = ch;
        }
        else
        {
            /* Stack empty */
            if(top == -1)
                return false;

            char open = stack[top--];

            /* Check matching */
            if((ch == ')' && open != '(') ||
               (ch == '}' && open != '{') ||
               (ch == ']' && open != '['))
            {
                return false;
            }
        }
    }

    /* Stack should be empty */
    return (top == -1);
}
