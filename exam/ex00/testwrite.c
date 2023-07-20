//faire un write z:

#include <unistd.h>

void	printZ(char z)
{
	write(1, &z, 1);
}