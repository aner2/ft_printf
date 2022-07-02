#include "ft_printf.h"

int	show(const char c)
{
	write (1, &c, 1);
	return (1);
}

int	classifier(va_list args, const char type)
{
	int	out;

	out = 0;
	
	if (type == '%')
	{
		write(1, "%", 1);
		out++;
	}
	else if (type == 'c')
		out += put_c(va_arg(args, int));
	else if (type == 'd' || type == 'i')
		out += put_d(va_arg(args, int));
	else if (type == 'u')
		out += put_u(va_arg(args, unsigned int));
	else if (type == 'x' || type == 'X')
		out += put_x(type, va_arg(args, unsigned int));
	else if (type == 's')
		out += put_s(va_args(args, char *));
	else if (type == 'p')
		out += put_p(va_args(args, unsigned long long));
	return (out);
}

int	ft_printf(char const *in, ...)
{
	va_list	args;
	int	out;
	int	until;

	va_start(args, in);
	out = 0;
	until = out;
	while (in[until])
	{
		if (in[until] == %)
			until++;
			out += classifier(args, in[until]);
		}
		else
			out += show(in[until]);
		until++;
	}
	return (out);
}
