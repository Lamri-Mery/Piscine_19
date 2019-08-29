/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:46:37 by mlamri            #+#    #+#             */
/*   Updated: 2019/08/13 19:25:25 by mlamri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	 ft_putchar(char);

void	ft_print_number(){
	char zero;
	char nine;

	zero = '0';
	nine = '9';

	while(zero<=nine)
	{
		ft_putchar(zero);
		zero++;
	}
}
