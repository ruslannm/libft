/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 14:11:22 by rgero             #+#    #+#             */
/*   Updated: 2019/09/13 16:34:26 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	ft_nbrlen(int n)
{
	size_t	ret;

	ret = 1;
	while (n / 10 > 0)
		ret++;
	return (ret);
}

char			*ft_itoa(int n)
{
	char	*ret;
	size_t	len;
	size_t	sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = 0;
	if (n < 0)
	{
		n = -1 * n;
		sign = 1;
	}
	len = sign + ft_nbrlen(n);
	if (!(ret = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ret[len] = '\0';
	while (len-- > 0)
	{
		ret[len] = n % 10 + '0';
		n = n / 10;
	}
	if (sign == 1)
		ret[0] = '-';
	return (ret);
}
