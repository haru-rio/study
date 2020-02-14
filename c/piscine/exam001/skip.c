/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skip.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okudaryou <okudaryou@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 11:31:48 by okudaryou         #+#    #+#             */
/*   Updated: 2020/02/14 11:31:54 by okudaryou        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print(char *str, int cnt_spaces)
{
    if (str[0] == '\0') {
        write(1, "\n", 1);
        return;
    } else if (str[0] == ' ') {
        print(&str[1], ++cnt_spaces);
    } else {
        if (cnt_spaces != 0) {
            write(1, "   ", 3);
        }
        write(1, &str[0], 1);
        print(&str[1], 0);
    }
}

void skip_head_spaces_then_print(char *str) {
    if (str[0] == ' ') {
        skip_head_spaces_then_print(&str[1]);
    } else {
        print(str, 0);
    }
}

int main(int argc, char *argv[])
{
    skip_head_spaces_then_print(argv[1]);
}
