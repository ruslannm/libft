/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 18:50:53 by rgero             #+#    #+#             */
/*   Updated: 2019/09/15 12:42:22 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*ret;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (i == ft_strlen(s))
	{
		if (!(ret = (char *)malloc(sizeof(char))))
			return (NULL);
		ret[0] = '\0';
		return (ret);
	}
	j = ft_strlen(s) - 1;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	if (!(ret = (char *)malloc(sizeof(char) * (j - i + 2))))
		return (NULL);
	k = 0;
	while (i <= j)
		ret[k++] = s[i++];
	ret[k] = '\0';
	return (ret);
}
