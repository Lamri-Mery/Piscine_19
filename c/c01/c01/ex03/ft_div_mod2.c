/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 14:24:52 by mlamri            #+#    #+#             */
/*   Updated: 2019/08/21 18:27:02 by mlamri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
int	main()
{
	int div = 3;
	int mod = 15;
	printf("\n à l'adresse de la division %p , il y a la valeur de la division %d , \n à l'adresse du modulo %p , il y a la valeur du modulo %d",&div,div,&mod,mod);
	return(0);
}
