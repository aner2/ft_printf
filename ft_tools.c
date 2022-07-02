#include "ft_printf.h"

int	len_base(unsigned int num, int base)
{
	int	out;

	out = 1;
	while (num / base)
	{
		num = num / base;
		out++;
	}
	return (out);
}

void	put_nbr(unsigned long long nbr, int base, const char type)
{
	type -= 33;
	while (nbr / base)
		put_nbr(nbr / base);
	if (base  == 10)
		write(1, (nbr % 10 + '0'), 1);
	else
		if (nbr % 16 > 9)
			write(1, (nbr % 16 + type), 1);
		else
			write(1, (nbr % 16 + '0'), 1);
}
