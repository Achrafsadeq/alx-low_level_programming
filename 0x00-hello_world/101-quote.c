#include <unistd.h>

/**
* main - Entry point
*
* Description: print a quote using write function
*
* Return: 1 (issue).
*/

int main(void)
{
char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

/* Insert a blank line here */

write(2, quote, sizeof(quote) - 1);
return (1);
}
