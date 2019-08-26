/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 08:54:29 by mlamri            #+#    #+#             */
/*   Updated: 2019/08/25 18:34:53 by mlamri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include<unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

char    *ft_strtstr (char *src, char *to_find)
{
    int a;
    int b;

    a = 0;
    b = 0;
    while(src[a] && to_find[b])
    {
        if((src[a] != '\0') && (src[a] == to_find[b]))
        {
            while(src[a] != '\0')
            {
                ft_putchar(src[a]);
                a++;
                b++;
            }
        }
        a++;
    }
}

int main() {
    char *src = "bhcbdspapaKHKDSK";
    char *to_find = "papa";
    
    *ft_strtstr (src, to_find);
    
    return 0;
}
