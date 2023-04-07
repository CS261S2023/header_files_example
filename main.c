#include <stdio.h>
#include "tentimes.h"  /* Must include header to get function declaration */

int main(void)
{
  int y = tentimes(7);  /* The function is called */
  printf("%d\n", y);
  return 0;
}
