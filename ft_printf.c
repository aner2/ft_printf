#include "ft_printf.h"

int	show(const char sound)
{
	write (1, &sound, 1);
	return (1);
}

int	classifier(va_list args, const char sign)
{
	int	out;

	out = 0;
	if (format == 'c')

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
