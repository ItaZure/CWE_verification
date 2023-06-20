
#include "CWE_672.h"

/**
 * @attention need to verify
 */
void cwe_672_example1()
{
char* ptr = (char*)malloc (SIZE);    
int err=1;
int abrt=0;
if (err) {
abrt = 1;
free(ptr);
}
if (abrt) {
logError("operation aborted before commit", ptr);
}
}

void cwe_672_example2(){
int abrt=1;
char* ptr = (char*)malloc (SIZE);
if (abrt) {
free(ptr);
}
free(ptr);

}
