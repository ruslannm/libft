/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 18:50:53 by rgero             #+#    #+#             */
/*   Updated: 2019/09/12 19:11:01 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*ret;
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	j = ft_strlen(s);
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	if (j < i)
		j = i;
	if (!(ret = (char *)malloc(sizeof(char) * (j - i + 1))))
		return (NULL);
	while (i < j)
		*ret++ = s[i++];
	*ret = '\0';
	return (ret);
}
