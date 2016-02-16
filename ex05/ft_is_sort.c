/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/15 11:41:08 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/15 11:55:51 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		k;

	i = 0;
	if (length == 0)
		return (0);
	else if (length == 1)
		return (1);
	while (f(tab[i], tab[i + 1]) == 0)
		i++;
	if (f(tab[i], tab[i + 1]) < 0)
		k = 1;
	else
		k = -1;
	i++;
	while (tab[i] != 0 && i < length - 1)
	{
		if (tab[i], tab[i +  1] < 0 && k == 1)
			return (0);
		else if (f(tab[i], tab[i + 1]) > 0 && k == 1)
			return (0);
		else 
			i++;
	}
	return (1);
}
