#include "procedures.h"

void run_parser(char expression[], char *lookahead)
{

    int position = 0;
    *lookahead = expression[position];

    printf("EXPRESSION %s ", expression);

    if (W(expression, &position, lookahead))
    {

        printf("-----------> ACCEPTED\n");
    }
    else
    {

        handle_errors(expression, &position);
    }
}

int main(void)
{
    char expression1[] = "(1/1+9*0P+1000)$";
    char expression2[] = "(1/1+9*10+1000)$";

    char lookahead1;
    char lookahead2;


    run_parser(expression1, &lookahead1);
    run_parser(expression2, &lookahead2);


    return 0;
}
