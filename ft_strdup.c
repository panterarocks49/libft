/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 22:04:30 by jbrown            #+#    #+#             */
/*   Updated: 2018/02/24 13:59:11 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char *dest;

	dest = (char *)malloc(sizeof(size_t) * (ft_strlen(src) + 1));
	if (dest == NULL)
		return (NULL);
	else
		return (ft_strcpy(dest, src));
}
