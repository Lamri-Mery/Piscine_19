/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 13:08:38 by mlamri            #+#    #+#             */
/*   Updated: 2019/08/21 13:54:48 by mlamri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_swap(int *a, int * b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int entier1 = 10;
	int entier2 = 15;

	int *a;
	int *b;
	
	a = &entier1;
	b = &entier2;

	printf("%d --- %d\n", *a, *b);
	
	ft_swap(a, b);	
	
	printf("%d --- %d\n", *a, *b);

	return 0;
}
