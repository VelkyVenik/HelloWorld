#include <stdio.h>

#include "hello.h"

void hello(void)
{
	// No argument
	printf ("Hello World\n");
}

void hello_arg (const char *arg)
{
	// Print the argument
	printf ("Hello World: %s\n", arg);
}
