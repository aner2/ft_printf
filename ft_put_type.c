#include "libft.h"

int	put_x(const char type, unsigned int x)
{
	put_nbr((unsigned long long)x, 16, type);
	return (len_base((unsigned long long)x, 16));
}

int	put_p(unsigned long long p)
{
	int	out;

	out = 0;
	out += write(1, "0x", 2);
	if (p == NULL)
		out += write(1, "0", 1);
	else
	{
		out += len_base((unsigned long long)p, 16);
		put_nbr((unsigned long long)p, 16, 'x');
	}
	return (out);
}

int	put_c(char c)
{
	return (write(1, &c, 1));
}

int	put_s(char *s)
{
	int	out;

	out = 0;
	while (s[out++])
		write(1, &s[out], 1);
	return (out);
}

int	put_d(int d)
{
	int		out;

	if (d < 0)
	{
		out += write(1, "-", 1);
		d *= -1;
	}
	put_nbr((unsigned long long)d, 10, 100);
	return (len_base((unsigned long long)d, 10));
}

void	put_u(unsigned int u)
{
	put_nbr((unsigned long long)u, 10, 100);
	return (len_base((unsigned long long)u, 10));
}
