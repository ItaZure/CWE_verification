
#include "proof_helpers/proof_helper.h"
#include "CWE_787.h"

void harness(void)
{

	/* 初始化函数变量 */

	/* 前置条件 */
	char *addr=malloc(0x30);
	__CPROVER_assert(addr!=NULL,"addr=null");
	cwe_787_example3(addr);

	/* 后置条件 */

}

