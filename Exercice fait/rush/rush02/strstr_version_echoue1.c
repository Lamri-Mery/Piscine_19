/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 08:54:29 by mlamri            #+#    #+#             */
/*   Updated: 2019/08/25 17:47:37 by mlamri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include<unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

char    *ft_strtstr (char *str, char *to_find)
{
    while(*str && *to_find)
    {
        if((*str != '\0') && (*str == *to_find))
        {
            while(*str != '\0')
            {
                ft_putchar(*str);
                str++;
                to_find++;
            }
        }
        str++; 
    }
}

int main() {
    char *str = "bhcbdspapaKHKDSK";
    char *to_find = "papa";

    *ft_strtstr (str, to_find);

    return 0;
}
