#include "libft.h"

int	aux_p(unsigned long long p)
{
	int	out;
	int	aux;

	out = 0;
	while (p > 0 && (out++) > -1)
		p = p / 16;
	aux = out;
	while (aux-- > 0)
		write(1, (p % 1 << (4 * aux)), 1);
	return (out);
}
int	put_p(unsigned long long p)
{
	int	out;

	out = 0;
	out += write(1, "0x", 2);
	if (p == NULL)
		out += write(1, "0", 1);
	else
}
