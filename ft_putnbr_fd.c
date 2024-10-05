/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:48:59 by nlyamani          #+#    #+#             */
/*   Updated: 2024/10/01 17:49:01 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nl;
	int		i;
	char	str[10];

	i = 0;
	nl = n;
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (nl < 0)
	{
		write(fd, "-", 1);
		nl = -nl;
	}
	while (nl > 0)
	{
		str[i++] = (nl % 10) + 48;
		nl /= 10;
	}
	while (i-- > 0)
		write(fd, &str[i], 1);
}
