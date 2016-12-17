/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 17:06:17 by bwaegene          #+#    #+#             */
/*   Updated: 2016/12/17 17:54:47 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	while ((s1[i] || s2[i]) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = i;
		while (j > 1 && ft_strcmp(argv[j - 1], argv[j]) > 0)
		{
			ft_strswap(&argv[j], &argv[j - 1]);
			j--;
		}
		i++;
	}
	i = 1;
	while (argv[i])
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
	return (0);
}
