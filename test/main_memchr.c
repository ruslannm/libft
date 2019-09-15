/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:14:59 by rgero             #+#    #+#             */
/*   Updated: 2019/09/09 17:52:42 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		main(void)
{
	char src[11]="1234567890";
	char	*dst;

	ft_putstr("src old:");
	ft_putstr(src);
    ft_putstr("-\n");

    dst = memchr(src, 'a', 10);
    ft_putstr("lb dst new:");
    if (dst)
		ft_putstr(dst);
	else
		ft_putstr("return NULL");
	ft_putstr("-\n");
	dst = NULL;
	dst = ft_memchr(src, 'a', 10);
    ft_putstr("my dst new:");
    if (dst)
		ft_putstr(dst);
	else
		ft_putstr("return NULL");
	ft_putstr("-\n");
	return 0;
}
