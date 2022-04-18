#include "main.h"

/**
 *Function determines the sign of the integer:based on whether or not the value is less than zero
 *
 *Return 1 is greater tha n zero, 0 is zero while -1 is less than zero
 *
 */
int print_sign(int n);
{
  if (n < 0)
  {
    _putchar(45);
    return (-1);
  }
  else if (n > 0)
  {
    _putchar(43);
    return (1);
  }
  else
  {
    _putchar(48);
    return (0);
  }
  _putchae('\n');
}
