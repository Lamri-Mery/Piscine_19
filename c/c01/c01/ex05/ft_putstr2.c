/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 14:53:00 by mlamri            #+#    #+#             */
/*   Updated: 2019/08/21 15:56:41 by mlamri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);    
}
void ft_putstr(char *str)
{
    int i;

    i = 0;
    
    while(str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}
int    main()
{
    char str[] = "pomme pomme pomme";

    ft_putstr(str);
}
