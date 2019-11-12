#ifndef HOLBERTON_H
#define HOLBERTON_H

/**========================================================================*/
/**-LIBRARIES--------------------------------------------------------------*/
/**========================================================================*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**========================================================================*/
/**-STRUCTURES-&-DEFINITIONS-----------------------------------------------*/
/**========================================================================*/

typedef long int ssize_t;

/**========================================================================*/
/**-FUNCTIONS--------------------------------------------------------------*/
/**========================================================================*/


/** 0. Reads a text file and prints it to the stdout */
ssize_t read_textfile(const char *filename, size_t letters);

/** 1. Creates a File */
int create_file(const char *filename, char *text_content);

/** 2. Appends text at the end of a file */
int append_text_to_file(const char *filename, char *text_content);

/** 3. Copies the content of a file to another file */
/** In the main */

/** A. Putchar */
int _putchar(char s);



#endif
