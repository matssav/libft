/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavaris <msavaris@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:43:35 by msavaris          #+#    #+#             */
/*   Updated: 2021/10/19 21:01:51 by msavaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *source, size_t destsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dest == 0 || source == 0)
		return (0);
	if (destsize > 0)
	{
		while (source[j] && j < destsize - 1)
		{
			dest[j] = source[j];
			j++;
		}
		dest[j] = '\0';
	}
	while (source[i])
		i++;
	return (i);
}
