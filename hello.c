#include <stdio.h>

#include "hello.h"

void hello(void)
{
	printf ("Hello World\n");
}

void hello_arg (const char *arg)
{
	printf ("Hello World: %s\n", arg);
}
