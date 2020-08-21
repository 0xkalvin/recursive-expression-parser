#include "procedures.h"

int W(char expression[], int *pos, char* lookahead)
{
    if (S(expression, pos, lookahead) && match('$', expression, pos, lookahead))
    {
        return 1;
    }
    return 0;
}

int S(char expression[], int *pos, char* lookahead)
{
    if (T(expression, pos, lookahead) && K(expression, pos, lookahead))
    {
        return 1;
    }
    return 0;
}

int K(char expression[], int *pos, char *lookahead)
{
    if (*lookahead == '+')
    {
        if (match('+', expression, pos, lookahead) && T(expression, pos, lookahead) && K(expression, pos, lookahead))
        {
            return 1;
        }
        return 0;
    }
    else if (*lookahead == '-')
    {
        if (match('-', expression, pos, lookahead) && T(expression, pos, lookahead) && K(expression, pos, lookahead))
        {
            return 1;
        }
        return 0;
    }
    else
        return 1;
}

int T(char expression[], int *pos, char* lookahead)
{
    if (F(expression, pos, lookahead) && Z(expression, pos, lookahead))
    {
        return 1;
    }
    return 0;
}

int Z(char expression[], int *pos, char *lookahead)
{
    if (*lookahead == '*')
    {
        if (match('*', expression, pos, lookahead) && F(expression, pos, lookahead) && Z(expression, pos, lookahead))
        {
            return 1;
        }
        return 0;
    }
    else if (*lookahead == '/')
    {
        if (match('/', expression, pos, lookahead) && F(expression, pos, lookahead) && Z(expression, pos, lookahead))
        {
            return 1;
        }
        return 0;
    }
    else
        return 1;
}

int F(char expression[], int *pos, char *lookahead)
{
    if (*lookahead == '(')
    {
        if (match('(', expression, pos, lookahead) && S(expression, pos, lookahead) && match(')', expression, pos, lookahead))
        {
            return 1;
        }
        return 0;
    }
    else if (is_numerid_character(*lookahead))
    {
        if (M(expression, pos, lookahead))
        {
            return 1;
        }
        return 0;
    }
    return 0;
}

int M(char expression[], int *pos, char *lookahead)
{
    if (is_numerid_character(*lookahead))
    {
        if (match(*lookahead, expression, pos, lookahead) && P(expression, pos, lookahead))
        {
            return 1;
        }
        return 0;
    }
    return 0;
}

int P(char expression[], int *pos, char *lookahead)
{
    if (is_numerid_character(*lookahead))
    {
        if (match(*lookahead, expression, pos, lookahead) && P(expression, pos, lookahead))
        {
            return 1;
        }
        return 0;
    }
    else
        return 1;
}