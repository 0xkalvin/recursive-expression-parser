#include "helpers.h"

int match(char c, char expression[], int *pos, char *lookahead)
{
    if (*lookahead == c)
    {
        *lookahead = expression[++(*pos)];
        return 1;
    }
    return 0;
}

void handle_errors(char expression[], int *pos)
{
    printf("-----------> NOT ACCEPTED :: error on character %c on index %d \n", expression[*pos], *pos);

}

int is_numeric_character(char c)
{
    if (c >= 48 && c <= 57)
    {
        return 1;
    }
    return 0;
}