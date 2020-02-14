/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okudaryou <okudaryou@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 00:42:21 by okudaryou         #+#    #+#             */
/*   Updated: 2020/02/14 11:29:48 by okudaryou        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//void	print_bits(unsigned char octet)


int		ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}

void	ft_putnbr(int nb)
{	
	if (nb < 2)
	write (1, )
	if (nb < 1)
	{
		ft_putchar(nb + '0');
	}
	else if(nb/2 > 1)
	{
		ft_putnbr(nb/ 2);
		ft_putchar(nb / 2 + '0');
		ft_putchar(nb % 2 + '0');
	}
	else
	{
		ft_putchar(nb / 2 + '0');
		ft_putchar(nb % 2 + '0');
	}
	
}

int		main(void)
{	
	ft_putnbr(1);
	return 0;
}
