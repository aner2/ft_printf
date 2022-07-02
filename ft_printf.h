#IFNDEF "FT_PRINTF_H"
# DEFINE "FT_PRINTF_H"

//ft_printf.c
int	show(const char c);
int	classifier(va_list args, const char type);
int	ft_printf(char const *in, ...);

//ft_tools.c
int	len_base(unsigned long long nbr, int base);
void	put_nbr(unsigned long long nbr, int base, const char type);

//ft_put_type.c
int	put_x(const char type, unsigned int x);
int	put_p(unsigned long long p);
int	put_d(int d);
int	put_c(int c);
int	put_s(char *s);

#ENDIF
