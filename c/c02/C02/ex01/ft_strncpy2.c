/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 15:42:35 by mlamri            #+#    #+#             */
/*   Updated: 2019/08/27 22:04:04 by mlamri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    i = 0;
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] ='\0';
        i++;
    }
    return (dest);
}
int main() {
    char dest[] = "gggggghfgyertyer";
    char src[] = "errhj";
    
    ft_strncpy(dest, src, 8);
    return 0;
}
