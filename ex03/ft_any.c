/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/15 11:10:24 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/16 06:35:37 by shaniena         ###   ########.fr       */
/*                                                                            *//* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int		i;

	i = 0;
	while (tab[i] != 0)
	{
		if(f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}
