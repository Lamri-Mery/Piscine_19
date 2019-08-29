/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 17:50:56 by mlamri            #+#    #+#             */
/*   Updated: 2019/08/27 00:44:15 by mlamri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_strlowcase(char *str)
{
    while (*str)
    {
        if (*str >= 'A' && *str <= 'Z')
            *str[i] = *str + 32;
        str++;
    }
}

int main() {
    char str[] = "lfasg";
    
    ft_strlowcase(str);
    return (0);
}
