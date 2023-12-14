#include "main.h"


/*
 * get_bit - function that returns the value of a bit at a given index
 * @n : number given in decimal
 * @index : the index, starting from 0 of the bit you want to get
 * Return :  the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	float d = n;
	unsigned int length, i;
	int bit = -1, k;

	while (1 <= d)
        {
		
                d = d * 0.5;
		length++;
        }

	

	for (i = 0; i < length; i++)
        {
               d = d * 2;
               k = d;
               while (k >= 2)
                        k -= 2;
               if (i == index)
               {	
		       if (k == 0)
                               bit = 0;
                       else
                               bit = 1;
               }
        }

	return(bit);

}
