/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 17:50:56 by mlamri            #+#    #+#             */
/*   Updated: 2019/08/27 00:44:15 by mlamri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

int ft_str_is_uppercase(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if(!(str[i] >= 65 && str[i] <= 90))
        {
            return(0);
        }
        i++;
    }
    return(1);
}

int main() {
    char str[] = "WEDS4EEE";
    
    printf("%d", ft_str_is_lowercase(str));
    return (0);
}
