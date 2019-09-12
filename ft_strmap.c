/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 16:22:20 by rgero             #+#    #+#             */
/*   Updated: 2019/09/12 16:38:03 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		ret[i] = f(tmp[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
