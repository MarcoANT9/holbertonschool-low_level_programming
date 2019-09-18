/**
 * main - prints a text to the standard error
 *
 *
 * Description - Prints "and that piece of art is usefull" from Dora Korpar
 * using the "Write" command.
 *
 *
 *
 * Return: Always fails (1)
 *
 */

#include <stdio.h>
#include <unistd.h>

int main(void)
{

write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

return (1);

}
