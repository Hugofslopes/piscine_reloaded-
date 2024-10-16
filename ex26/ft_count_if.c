/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:01:27 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/10/16 14:25:52 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) == 1)
			nb++;
		i++;
	}
	return (nb);
}