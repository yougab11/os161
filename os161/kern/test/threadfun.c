/*
 * this is the thread fun file 
 * not really sure what this function will do
 *
 */

#include "threadtest.c"

int
threadfun (int nargs, char **args){
	(void) nargs;
	(void) args;
	
	init_sem();
	kprintf("starting a fun thread test .. \n");

	kprintf("\nfinished!\n");
	return 0;

}
