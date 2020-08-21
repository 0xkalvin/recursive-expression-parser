#ifndef PROCEDURES_H
#define PROCEDURES_H

#include <stdio.h>
#include <stdlib.h>

#include "helpers.h"

int W(char expression[], int *pos, char *lookahead);
int S(char expression[], int *pos, char *lookahead);
int K(char expression[], int *pos, char *lookahead);
int T(char expression[], int *pos, char *lookahead);
int Z(char expression[], int *pos, char *lookahead);
int F(char expression[], int *pos, char *lookahead);
int M(char expression[], int *pos, char *lookahead);
int P(char expression[], int *pos, char *lookahead);

#endif