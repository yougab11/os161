/*
 * this is the thread fun file 
 * not really sure what this function will do
 *
 */

//#include "../../kern/test/threadtest.c"

#include <types.h>
#include <lib.h>

static void init_sem2(void){
	if(tsem ==NULL){
		tsem = sem_create("tsem",0);
		if(tsem == NULL){
			panic("threadtest: sem_create failed\n");
		}
	}
}

int
threadfun (int nargs, char **args){
	(void) nargs;
	(void) args;
	
	init_sem2();
	kprintf("starting a fun thread test .. \n");

	kprintf("\nfinished!\n");
	return 0;

}
