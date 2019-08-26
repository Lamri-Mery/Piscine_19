/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createArrays.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoncker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 08:17:08 by ldoncker          #+#    #+#             */
/*   Updated: 2019/08/18 22:13:25 by mlamri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    array(int *array)
{
	int array[4];
    int a;
	int b;
	int *ptr;

	a = 0;
    b = 0;
	
	array[b] = str[a] - '0';
	a = a + 2;
	b++;
}

int		ft_upArray();
{
	int upArray[4];
	int a;
	int b;

	a = 0;
	b = 0;
	while (a < 7)
	{
	
	array(*array);
	}
	b = 0;
	while (b < 4)
	{
		printf("%d", upArray[b]);
		b++;
	}
	return(0);
}

int		ft_downArray(char *upArray)
{
	int downArray[4];
	int a;
	int b;

	a = 8;
	b = 0;
	while(a < 15)
	{
		downArray[b] = str[a] - '0';
		a = a + 2;
		b++;
	}
	b = 0;
	while (b < 4)
	{
		printf("%d", downArray[b]);
		b++;	
	}
	return(0);
}

int		ft_leftArray(char *str)
{
	int leftArray[4];
	int a;
	int b;

	a = 16;
	b = 0;
	while(a < 23)
	{
		leftArray[b] = str[a] - '0';
		a = a + 2;
		b++;
	}
	b = 0;
	while (b < 4)
	{
		printf("%d", leftArray[b]);
		b++;
	}
	return(0);
}

int		ft_rightArray(char *str)
{
	int rightArray[4];
	int a;
	int b;

	a = 24;
	b = 0;
	while (a < 31)
	{
		rightArray[b] = str[a] - '0';
		a = a + 2;
		b++;
	}
	b = 0;
	while (b < 4)
	{
		printf("%d", rightArray[b]);
		b++;
	}
	return(0);
}

int        main(int argc, char **argv)
{
	if (argc == 2)
		ft_upArray(argv[1]);
		printf("%s", "\n");
		ft_downArray(argv[1]);
		printf("%s", "\n");
		ft_leftArray(argv[1]);
		printf("%s", "\n");
		ft_rightArray(argv[1]);
	return (0);
}
