
#include "CWE_469.h"

/**
 * @attention need to verify
 */
void cwe_469_example1(struct node* head)
{
struct node* current = head;
struct node* tail;
while (current != NULL) {
tail = current;
current = current->next;
}
return tail - head;


}

