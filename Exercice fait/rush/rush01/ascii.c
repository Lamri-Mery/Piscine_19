/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ascii.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 18:13:13 by mlamri            #+#    #+#             */
/*   Updated: 2019/08/17 19:38:19 by mlamri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_verif(char c)
{
	if (c >= '0' && c <= '9' && c == 32)
		return(1);
	else
		return(0);
}

void ascii(char c)
{
	char _ascii;
	_ascii = c;

	write(1, &_ascii, 1);
}

int main()
{
	ascii('0');
	return(0);
}
