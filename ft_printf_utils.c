/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 21:23:28 by marvin            #+#    #+#             */
/*   Updated: 2024/11/25 21:23:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <unistd.h>

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	i;

	if (!str)
		return (write(1, "(null)", 6));
	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
	return (i);
}

int	ft_putnbr(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		len += ft_putchar('-');
		n = -n;
	}
	if (n > 9)
		len += ft_putnbr(n / 10);
	len += ft_putchar((n % 10) + '0');
	return (len);
}

int	ft_putnbr_u(unsigned int n)
{
	int	len;

	len = 0;
	if (n > 9)
		len += ft_putnbr_u(n / 10);
	len += ft_putchar((n % 10) + '0');
	return (len);
}

int	ft_puthex(unsigned int n, char format)
{
	int		len;
	char	hex_char;

	len = 0;
	if (n > 15)
		len += ft_puthex(n / 16, format);
	hex_char = "0123456789abcdef"[n % 16];
	if (format == 'X' && hex_char >= 'a' && hex_char <= 'f')
		hex_char -= 32;
	len += ft_putchar(hex_char);
	return (len);
}
