#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: The input string
 *
 * Description: Starts with the first character (index 0),
 *              then every other character after that.
 *              Ends with a new line.
 */
void puts2(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        if (str[i + 1] == '\0')
            break;
        i += 2;
    }
    _putchar('\n');
}
