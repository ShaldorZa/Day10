/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/15 11:24:45 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/15 11:28:37 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count(char **tab, int(*f)(char*))
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if (f(tab[i]))
				count++;
		i++;
	}
	return (count);
}