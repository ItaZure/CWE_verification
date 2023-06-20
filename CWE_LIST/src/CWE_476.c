
#include "CWE_476.h"


/**
 * @attention need to verify
 */
void cwe_476_example1(char *user_supplied_addr)
{
  struct hostent *hp;
  in_addr_t *addr;
  char hostname[64];

  validate_addr_form(user_supplied_addr);
  addr = inet_addr(user_supplied_addr);
  hp = gethostbyaddr( addr, sizeof(struct in_addr), AF_INET);
  strcpy(hostname, hp->h_name);

}

