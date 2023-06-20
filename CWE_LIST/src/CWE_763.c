
#include "CWE_763.h"

/**
 * @attention need to verify
 */
void cwe_763_example1(int argv)
{
char **ap, *argv[10], *inputstring;
for (ap = argv; (*ap = strsep(&inputstring, " \t")) != NULL;)
if (**ap != '\0')
if (++ap >= &argv[10])
break;
free(ap[4]);

}
int cwe_763_example2(char c)
{

char *str;
str = (char*)malloc(20*sizeof(char));
strcpy(str, "Search Me!");
while( *str != NULL){
if( *str == c ){

/* matched char, free string and return success */
free(str);
return SUCCESS;
}
/* didn't match yet, increment pointer and try next char */

str = str + 1;
}
/* we did not match the char in the string, free mem and return failure */

free(str);
return FAILURE;
}