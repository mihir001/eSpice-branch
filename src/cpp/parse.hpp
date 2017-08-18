#ifndef PARSE_INCLUDE
#define PARSE_INCLUDE

/* The parse function accepts a string containing Brain****++ code
 * It must split the code into tokens as defined by the language specification
 * Look at the document for an example
 * */

#include <stddef.h>
#include<string>
using namespace std;

struct node {
    char c;
    node *l , *r;
    node() {
        l = NULL; r = NULL;
    }
 };

bool validate(char *);
node *parse(string,int);

#endif
