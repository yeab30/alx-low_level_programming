#include <stdio.h>
int _strlen(char *s) {
	    int len = 0;
	        while (*s != '\0') {
			        len++;
				        s++;
					    }
		    return len;
}
