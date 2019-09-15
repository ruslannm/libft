/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 17:13:54 by rgero             #+#    #+#             */
/*   Updated: 2019/09/15 14:51:10 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	char	*s1_tmp;
	char	*s2_tmp;
	size_t	i;

	if (!s1 || !s2)
		return (0);
	s1_tmp = (char *)s1;
	s2_tmp = (char *)s2;
	i = 0;
	while (i < n && s1_tmp[i] != '\0' && s2_tmp[i] != '\0' \
			&& s1_tmp[i] == s2_tmp[i])
	{
		i++;
	}
	if (s1_tmp[i] == s2_tmp[i])
		return (1);
	return (0);
}
