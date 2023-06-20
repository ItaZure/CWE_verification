
#include "CWE_478.h"

/**
 * @attention need to verify
 */
void cwe_478_example1()
{
int result=3;
switch (result) {
case FAILED:
printf("Security check failed!\n");
exit(-1);
//Break never reached because of exit()
break;

case PASSED:
printf("Security check passed.\n");
break;
}

}

