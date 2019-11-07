#ifndef HOLBERTON_H
#define HOLBERTON_H

/**========================================================================*/
/**-LIBRARIES--------------------------------------------------------------*/
/**========================================================================*/

#include <stdlib.h>


/**========================================================================*/
/**-STRUCTURES-------------------------------------------------------------*/
/**========================================================================*/



/**========================================================================*/
/**-FUNCTIONS--------------------------------------------------------------*/
/**========================================================================*/

/** Converts Bin -> Dec */
unsigned int binary_to_uint(const char *b);

/** Converts Dec -> Bin */
void print_binary(unsigned long int n);

/** Returns the value of a bit given an index */
int get_bit(unsigned long int n, unsigned int index);

/** Sets the value of a specific bit to 1 */
int set_bit(unsigned long int *n, unsigned int index);

/** Sets the value of a bit to 0 at a given index */
int clear_bit(unsigned long int *n, unsigned int index);

/** Number of bits you need to flip to get form one number to other */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/** Putchar */
int _putchar(char c);


#endif
