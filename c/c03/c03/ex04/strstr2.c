/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 10:12:56 by mlamri            #+#    #+#             */
/*   Updated: 2019/08/29 16:48:52 by mlamri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *src, char *to_find)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (src[a] != '\0')
	{
		a++;
		if (src[a] == to_find[b])
		{
			while (to_find[b] == src[a + b])
				b++;
			if (to_find[b] == '\0')
				return (&src[a]);
			b = 0;
		}
	}
	return (to_find);
}

int		main(void)
{
	char *src;
	char *to_find;

	*src = "papai";
	*find = "bhcbdspapaKHKpapaiDST";
	printf("%s\n", ft_strstr(src, to_find));
	return (0);
}
