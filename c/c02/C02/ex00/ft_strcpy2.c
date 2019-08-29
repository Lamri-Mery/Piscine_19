/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 09:18:35 by mlamri            #+#    #+#             */
/*   Updated: 2019/08/27 22:00:10 by mlamri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++; 
	}
	dest[i] = '\0';
	return (dest);
}

int main() {
	char dest[10];
	char src[] = "errht";

	printf("%s", ft_strcpy(dest, src));
	return 0;
}
