/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavaris <msavaris@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:34:26 by msavaris          #+#    #+#             */
/*   Updated: 2021/10/18 19:45:18 by msavaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*rtns;

	rtns = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!(rtns))
		return (NULL);
	i = 0;
	while (s[i])
	{
		rtns[i] = f(i, s[i]);
		++i;
	}
	rtns[i] = '\0';
	return (rtns);
}
