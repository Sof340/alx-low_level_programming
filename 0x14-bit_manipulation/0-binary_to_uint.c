#include "main.h"

/*binary_to_uint - function that converts binary to deciaml
 * @b : pointer to a string of 0 and 1
 * Return : decimal value of input
 */

unsigned int binary_to_uint(const char *b)
{
	int length = 0, i = 0, error = 0, decimal = 0, length1 , pow = 1, j;
	

	if (b == NULL)
		return(0);

	while (b[i] != '\0')
	{
		length++;
		if (b[i] != '0' && b[i] != '1')
			error = 1;
		i++;
	}

	if (error == 1)
		return(0);
	
	length1 = length;
	
	for (i = 0; i < length1 ; i++)
	{
		length -= 1;
		if (length  == 0 && b[i] == '1')
			decimal += 1;
		else if (b[i] == '0')
			continue;
		else
		{
			for (j = 0 ; j < length ; j++)
				pow = pow * 2;
			decimal +=  pow;
			pow = 1;
		}	
	}
	return(decimal);

}
