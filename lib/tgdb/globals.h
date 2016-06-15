#ifndef __GLOBALS_H__
#define __GLOBALS_H__

/* This unit holds global data to tgdb. It helps keep track of obscure states */

struct globals;

int globals_is_misc_prompt(struct globals *g);
void globals_set_misc_prompt_command(struct globals *g, unsigned short set);

struct globals *globals_initialize(void);
void globals_shutdown(struct globals *g);

#endif