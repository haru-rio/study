/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_anf_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okudaryou <okudaryou@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 00:10:21 by okudaryou         #+#    #+#             */
/*   Updated: 2020/02/14 11:29:21 by okudaryou        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_bits(unsigned char octet)
{
    unsigned char i = 128;
    char c = '0';
    while (i > 0) {
        if (i & octet) {
            c = '1';
        } else {
            c = '0';
        }
        write(1, &c, 1);
        i = i / 2;
    }
}

int main(int argc, char *argv[])
{
    int i = 0;
    while (i < 256)
    {
        print_bits((unsigned char)i);
        write(1, "\n", 1);
        i++;
    }
}


int     main(int argc, char *argv[])
{
	// ./main abc a b の時
	// argv[0] には./mainが入る
	// argv[1]にはabcがはいる
	if(argc == 4)
		ft_search_and_replace(argv[1], *argv[2], *argv[3]);
	else
		write(1, "\n", 1);
	return (0);
}
