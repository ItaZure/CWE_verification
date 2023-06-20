
#include "CWE_561.h"
/**
 * @attention need to verify
 */
void cwe_561_example1()
{
char* s = NULL;
char* b;
if (b) {
s = "Yes";
return;
}

if (s != NULL) {
Dead();
}

}

