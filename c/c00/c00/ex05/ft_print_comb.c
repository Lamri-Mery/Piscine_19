;/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 14:42:42 by mlamri            #+#    #+#             */
/*   Updated: 2019/08/19 18:29:57 by mlamri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar();

void	ft_print_comb()
{
	int a;
	int b;
	int c;
	
	a = 0;
	b = 0;
	c = 0;

    while(a < 7)
    {
        while(b < 8)
        {
            while(c < 9)
            {
                ft_putchar(c);
                c++;
            }
            ft_putchar(b);
            b++;
            c = 0;
        }
        ft_putchar(a);
        a++;
        b = 0;
    }
}

