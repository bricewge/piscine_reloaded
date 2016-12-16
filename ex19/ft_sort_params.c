/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 17:06:17 by bwaegene          #+#    #+#             */
/*   Updated: 2016/12/16 17:31:51 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int		ft_strls_len(char **list)
{
	int		i;

	i = 0;
	while (list[i])
		i++;
	return (i);
}

void	ft_strswap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_str_bubble_sort(char **list)
{
	int i;
	int j;

	i = 1;
	while (i >= 1 && i <= ft_strls_len(list) - 1)
	{
		j = 1;
		while (j >= 1 && j <= i - 1)
		{
			if (ft_strcmp(list[j], list[j + 1]) > 0)
			{
				ft_strswap(&list[j + 1], &list[j]);
			}
			printf("i: %d, j: %d, list1: %s\n", i, j, list[j + 1]);
			j++;
		}
		i++;
	}
}

/* void	ft_str_insersion_sort(char **list) */
/* { */
/* 	int i; */
/* 	int j; */

/* 	//ft_putnbr(ft_strcmp(list[0], list[1])); */
/* 	i = 2; */
/* 	while (i >= 2 && i <= ft_strls_len(list)) */
/* 	{ */
/* 		j = i; */
/* 		while (j > 0 && ft_strcmp(list[j - 1], list[j]) > 0) */
/* 		{ */
/* 			ft_strswap(&list[j], &list[j - 1]); */
/* 			j--; */
/* 		} */
/* 		i++; */
/* 	} */
/* } */

/* void	ft_strsort(char **list) */
/* { */
/* 	int i; */
/* 	int j; */
/* 	int len; */

/* 	i = 1; */
/* 	j = 0; */
/* 	len = ft_strls_len(list); */
/* 	//ft_strswap(&list[1], &list[2]); */
/* 	while (i >= 1 && i <= len) */
/* 	{ */
/* 		i++; */
/* 	} */
/* } */

int		main(int argc, char **argv)
{
	int i;

	i = 0;

	//ft_strswap(&argv[1], &argv[2]);
	//printf("%d", ft_strcmp(argv[1], argv [0]));
	//ft_str_insersion_sort(argv);
	//ft_strsort(argv);
	ft_str_bubble_sort(argv);
	while (argv[i])
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
	return (0);
}
