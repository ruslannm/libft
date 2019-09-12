/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 16:39:20 by rgero             #+#    #+#             */
/*   Updated: 2019/09/12 16:42:21 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*tmp;
	char	*ret;
	size_t	len;
	size_t	i;

	tmp = (char *)s;
	len = ft_strlen(tmp);
	if (!(ret = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		ret[i] = f((unsigned int)i, tmp[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
