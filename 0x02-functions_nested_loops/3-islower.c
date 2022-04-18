#include "main.h"

/**
 *function checks for whether or not a character is in its lower case.
 *
 *Return 1: for lower case character
 *
 *Return 0: for upper case character
 */

int islower(int b)
{
  if (b >= 97 && b <= 122)
    {
      return (1);
    }
  else
    {
      return (0);
    }
} 
  
