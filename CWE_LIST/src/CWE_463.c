
#include "CWE_463.h"


/**
 * @attention need to verify
 */
void cwe_463_example1()
{
char *foo;
int counter;
foo=calloc(10,sizeof(char));
__CPROVER_assert(foo==NULL,"calloc wrong.");
for (counter=0;counter!=10;counter++) {
foo[counter]='a';

printf("%s\n",foo);
}

}

