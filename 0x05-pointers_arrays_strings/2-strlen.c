#include <stdio.h>
/*hh*/
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
