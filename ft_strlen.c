/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 19:12:16 by rgero             #+#    #+#             */
/*   Updated: 2019/09/09 19:15:50 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	strlen(const char *s)
{
	unsigned char	*s_tmp;
	size_t			len;

	len = 0;
	s_tmp = (unsigned char *)s;
	while (s_tmp[len] != '\0')
		len++;
	return (len++);
}
