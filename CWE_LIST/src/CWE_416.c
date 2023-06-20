
#include "CWE_416.h"


/**
 * @attention need to verify
 */
void cwe_416_example1(int argc, char **argv)
{

char *buf1R1;
char *buf2R1;
char *buf1R2;
buf1R1 = (char *) malloc(BUFSIZE2);
buf2R1 = (char *) malloc(BUFSIZE2);
free(buf1R1);
free(buf2R1);
buf1R2 = (char *) malloc(BUFSIZE1);
strncpy(buf1R2, argv[1], BUFSIZE1-1);
free(buf2R1);
free(buf1R2);

}

void cwe_416_example2()
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