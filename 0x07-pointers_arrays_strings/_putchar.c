#include <unistd.h>

/*_putchar - writes the char @c to stdout
 * @c: char to print to stdout
 * Return: 1 if success, else -1 on error and set errno
 *
 */

int _putchar(char c)
{
    return (write(1, &c, 1));
}
