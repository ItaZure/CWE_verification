
#include "proof_helpers/proof_helper.h"
#include "CWE_476.h"

void harness(void)
{

	/* 初始化函数变量 */

	/* 前置条件 */
	char * addr=malloc(0x20);
	__CPROVER_assert(addr!=NULL,"addr=null");
	cwe_476_example1(addr);

	/* 后置条件 */

}
