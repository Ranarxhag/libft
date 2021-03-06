/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjovanov <bjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 17:58:05 by bjovanov          #+#    #+#             */
/*   Updated: 2018/10/31 18:18:07 by bjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	int i;
	int sqrt;

	i = 1;
	sqrt = 0;
	while (i <= nb / 2)
	{
		sqrt = i * i;
		if (sqrt == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
