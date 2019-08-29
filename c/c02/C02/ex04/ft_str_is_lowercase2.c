/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 17:50:56 by mlamri            #+#    #+#             */
/*   Updated: 2019/08/27 00:44:15 by mlamri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if(!(str[i] >= 97 && str[i] <= 122))
        {
            return(0);
        }
        i++;
    }
    return(1);
}

int main() {
    char str[] = "rewrew";
    
    printf("%d", ft_str_is_lowercase(str));
    return (0);
}
