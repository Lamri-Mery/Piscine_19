/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 14:10:35 by mlamri            #+#    #+#             */
/*   Updated: 2019/08/13 17:39:56 by mlamri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char);

void	ft_reverse_alphabet(){
	char end;
	char start;

	end = 'z';
	start = 'a';

	while(end>=start)
	{
		ft_putchar(end);
		end--;
	}
}
