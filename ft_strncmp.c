/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 17:05:46 by rgero             #+#    #+#             */
/*   Updated: 2019/09/11 17:16:01 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*s1_tmp;
	char	*s2_tmp;
	size_t	i;

	s1_tmp = (char *)s1;
	s2_tmp = (char *)s2;
	i = 0;
	while (i < n && s1_tmp[i] != '\0' && s2_tmp[i] != '\0' \
			&& s1_tmp[i] == s2_tmp[i])
	{
		i++;
	}
	return (s1_tmp[i] - s2_tmp[i]);
}
