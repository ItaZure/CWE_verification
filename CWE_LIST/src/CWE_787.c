
#include "CWE_787.h"

/**
 * @attention need to verify
 */
void cwe_787_example1()
{
int id_sequence[3];

/* Populate the id array. */

id_sequence[0] = 123;
id_sequence[1] = 234;
id_sequence[2] = 345;
id_sequence[3] = 456;

}

void cwe_787_example2()
{
char * destBuf,srcBuf;
memcpy(destBuf, srcBuf, (returnChunkSize(destBuf)-1));

}

void cwe_787_example3(char *user_supplied_addr)
{
  struct hostent *hp;
  in_addr_t *addr;
  char hostname[64];
  // declared in header file↓
  // in_addr_t inet_addr(const char *cp);   

  /*routine that ensures user_supplied_addr is in the right format for conversion */

  validate_addr_form(user_supplied_addr);
  addr = inet_addr(user_supplied_addr);
  hp = gethostbyaddr( addr, sizeof(struct in_addr), AF_INET);
  strcpy(hostname, hp->h_name);

}

char * cwe_787_example4(char *user_supplied_string)
{
int i, dst_index;
char *dst_buf = (char*)malloc(4*sizeof(char) * MAX_SIZE);
if ( MAX_SIZE <= strlen(user_supplied_string) ){
die("user string too long, die evil hacker!");
}
dst_index = 0;
for ( i = 0; i < strlen(user_supplied_string); i++ ){
if( '&' == user_supplied_string[i] ){
dst_buf[dst_index++] = '&';
dst_buf[dst_index++] = 'a';
dst_buf[dst_index++] = 'm';
dst_buf[dst_index++] = 'p';
dst_buf[dst_index++] = ';';
}
else if ('<' == user_supplied_string[i] ){

/* encode to &lt; */
}
else dst_buf[dst_index++] = user_supplied_string[i];
}
return dst_buf;

}


