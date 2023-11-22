#include <stdlib.h>
#include <stdio.h>

/*this is a simple script that prints it's name
 * argc = 1
 * argv[0] = name of the script
 */

int main(int argc ,char **argv)
{
	printf("%s\n",argv[argc - 1]);
	return 0;
}

