
#include "CWE_681.h"

/**
 * @attention need to verify
 */
unsigned int cwe_681_example1()
{
int amount = 0;
int result=1;
if (result == 1)
amount = -1;
return amount;
}

unsigned int cwe_681_example2()
{
int amount = 0;
amount = accessmainframe();
return amount;

}
