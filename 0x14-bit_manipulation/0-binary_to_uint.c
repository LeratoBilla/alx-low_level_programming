#include <stdio.h>

/**
 * binary_to_uint - Convert binary to unsigned int
 * @b: Pointer to a string of binary digits
 *
 * Return: The converted number as an unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
 unsigned int result = 0;
 int i;
 if (!b)
  return (0);

 for (i = 0; b[i]; i++)
 {
  if (b[i] == '0')
   result = (result << 1);
  else if (b[i] == '1')
   result = (result << 1) | 1;
  else
   return (0);
 }
 return (result);
}
