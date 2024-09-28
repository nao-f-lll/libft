#include "libft.h"

static int	ft_nbrlen(int n)
{
	int	n_s;

	n_s = 1;
	if (n < 0)
	{
		if (n == C_INT_MIN)
			n = C_INT_MAX;
		else
			n = -n;
		n_s++;
	}
	while (n > 9)
	{
		n /= 10;
		n_s++;
	}
	return (n_s);
}

static	int	ft_is_negative(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	int		n_s;
	int		is_negative;
	char	*str;

	if (n == C_INT_MIN)
		return (strdup("-2147483648")); //remeber to change this to ft_strdup
	n_s = ft_nbrlen(n);
	is_negative = ft_is_negative(n);
	str = (char *) malloc(n_s * sizeof(char) + 1);
	if (!str)
		return (NULL);
	str[n_s] = '\0';
	if (is_negative)
		n = -n;
	while (n_s > 0)
	{
		str[--n_s] = (n % 10) + 48;
		n = n / 10;
	}
	if (is_negative)
		str[n_s] = '-';
	return (str);
}
