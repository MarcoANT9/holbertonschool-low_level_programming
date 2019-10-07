int _putchar(char c); /** Good ol' putchar */

char *_memset(char *s, char b, unsigned int n); /** Fills memory with a constant
						    byte*/

char *_memcpy(char *dest, char *src, unsigned int n); /** Copies memory area */

char *_strchr(char *s, char c); /** Locates a character in a string */

unsigned int _strspn(char *s, char *accept); /** Gets length of a prefix
						 substring */

char *_strpbrk(char *s, char *accept); /** Searches a string for any set of
					   bytes */

char *_strstr(char *haystack, char *needle); /** Locates a substring */

void print_chessboard(char (*a)[8]); /** Prints a chessboard */

void print_diagsums(int *a, int size); /** Prints the sum of the two diagonals
					   of a square matrix */

void set_string(char **s, char *to); /** Sets the value of a pointer to a
					 char */
