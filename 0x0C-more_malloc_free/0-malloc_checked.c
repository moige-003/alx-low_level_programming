#include <stdlib.h>
#include "main.h"

/**
* malloc_checked: Allocatememory using malloc
* @b: size allocated to the unsigned int
* return: void
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
