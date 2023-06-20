
/* add header files */
#include <netdb.h> // 定义hostent结构体和 gethostbyaddr函数
#include <sys/socket.h> // 定义socklen_t宏
// 下面两个添加in_addr_t宏
#include <sys/types.h>
#include <netinet/in.h>
#include <string.h>
#include <arpa/inet.h> // 定义 inet_addr函数 
#define MAX_SIZE 512
/* example function must be declared here*/
void cwe_787_example1();

void cwe_787_example2();
int returnChunkSize(void *);
void cwe_787_example3(char *);

char *  cwe_787_example4(char *);
