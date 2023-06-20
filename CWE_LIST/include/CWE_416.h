
/* add header files */
#include <stdio.h>
#include <unistd.h>
#define BUFSIZE1 512
#define BUFSIZE2 ((BUFSIZE1/2) - 8)
#define SIZE 512
/* example function must be declared here*/

void cwe_416_example1(int,char **);
void cwe_416_example2();

void logError(char**,char *);