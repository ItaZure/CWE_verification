
#include "CWE_590.h"


/**
 * @attention need to verify
 */
void cwe_590_example1()
{
struct record_t bar[MAX_SIZE];

free(bar);
}

