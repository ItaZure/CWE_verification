
/* add header files */

/* example function must be declared here*/

void cwe_674_example1();
void do_something_recursive(int flg){
if (flg) { do_something_recursive (flg); } // flg is never modified so it is always TRUE - this call will continue until the stack explodes

}