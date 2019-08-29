/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 09:40:00 by mlamri            #+#    #+#             */
/*   Updated: 2019/08/29 09:45:36 by mlamri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio>

char	*ft_strcat(char *src, char *dest)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}

int		main(void)
{
	char *src;
	char *dest;

	*src = "papao";
	*dest[100] = "papai";
	printf("%s\n", ft_strcat(src, dest));
	return (0);
}
