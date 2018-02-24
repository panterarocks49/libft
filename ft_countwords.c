/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 20:12:26 by jbrown            #+#    #+#             */
/*   Updated: 2018/02/23 12:51:44 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwords(const char *s, char c)
{
	unsigned int	count;

	count = 0;
	while (*s && s)
	{
		if (*s != c)
		{
			count++;
			while (*s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}
