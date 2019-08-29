/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 00:55:38 by mlamri            #+#    #+#             */
/*   Updated: 2019/08/13 12:08:52 by mlamri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar();

void	ft_print_alphabet(void)
{
	char start;
	char end;
	
	start = 'a';
	end = 'z';

	while(start <= end)
	{
		ft_putchar(start);
		start++;
	}
}
