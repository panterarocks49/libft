/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 19:55:53 by jbrown            #+#    #+#             */
/*   Updated: 2018/02/23 13:29:30 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**dest;
	char	**dest_ptr;
	char	*word_ptr;

	if (!s)
		return (NULL);
	if (!(dest = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1))))
		return (NULL);
	dest_ptr = dest;
	while (*s)
	{
		if (*s != c)
		{
			if (!(*dest_ptr = ft_strnew(ft_wordlen(s, c))))
				return (NULL);
			word_ptr = *dest_ptr++;
			while (*s != c && *s)
				*word_ptr++ = *s++;
		}
		else
			s++;
	}
	*dest_ptr = NULL;
	return (dest);
}
