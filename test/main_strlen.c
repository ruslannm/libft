/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:14:59 by rgero             #+#    #+#             */
/*   Updated: 2019/09/09 19:18:21 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft.h"

int		main(void)
{
	unsigned char src[11]=""; //1234567890";
	unsigned char dst[11]=""; //1034567890";
    unsigned char sr2[11]=""; //1234567890";
    unsigned char ds2[11]=""; //1034567890";

	size_t	n;
	n = 5;

	ft_putstr("src old:");
	ft_putstr((char *)src);
    ft_putstr("-\n");

    ft_putstr("lb dst new:");
    if (memcmp(src, dst, n) == 0)
		ft_putstr("mem equal");
	else
		ft_putstr("mem not equal");
	ft_putstr("-\n");
	

    ft_putstr("my dst new:");
    if (ft_memcmp(sr2, ds2, n) == 0)
		ft_putstr("mem equal");
	else
		ft_putstr("mem not equal");
	ft_putstr("-\n");
	return 0;
}
