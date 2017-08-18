#ifndef EVAL_H_INCLUDED
#define EVAL_H_INCLUDED

/* The eval function takes as input an array "tokens" which contains multiple strings
 * This is represented by a pointer to an array of pointers to characters
 *
 * It must process each token, perform the necessary operations as defined by the Brain**** language and by our extensions, printing any output along the way to the console
 * Finally, it must return the value at the position in memory where the data pointer is as an integer
 */

#include <iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<string>
#include<math.h>

#include"parse.hpp"

void evaluate(node*);

int square(int x);
int square_root(int x);
int factorial(int x);
int multiply(int a, int b);
int divide(int a, int b);
int power(int a, int b);
void mv(int a, int b);

int *TABLE;


#endif // EVAL_H_INCLUDED
