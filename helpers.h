#ifndef HELPERS_H
#define HELPERS_H

#include <stdio.h>
#include <stdlib.h>

int match(char c, char expression[], int *position, char* lookahead);
void handle_errors(char expression[], int *position);
int is_numeric_character(char c);

#endif