#include <stdio.h>

/**
 * myfunction - prints two sentences before main function is executed
 */


/* constructor attribute to ensure myFunction is executed before main()*/
void myFunction(void) __attribute__ ((constructor));



void myFunction(void)
{
printf(
"You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
