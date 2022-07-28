#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - Allocates memory using malloc
* @b: size allocated to the unsigned int
* Return: void;
*/
void *malloc_checked(unsigned int b)

{

char *k;

k = malloc(b);
if (k == NULL)
;

{
exit(98);

}

return (k);

}
