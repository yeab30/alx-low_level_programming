#include <stdio.h>
/* _strlen - length
 * @str: string
 * Return: the length of @str
 */
 int _strlen(char *s)
/*ad*/
{
	    int len = 0;
	        while (*s != '\0') {
			        len++;
				        s++;
					    }
		    return len;

}
