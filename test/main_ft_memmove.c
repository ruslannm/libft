/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 16:34:35 by rgero             #+#    #+#             */
/*   Updated: 2019/09/15 11:15:01 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>

int main (void)
{
	
    printf("li %s\n", (memmove(((void *)0), ((void *)0), 5)));
    printf("my %s\n", (ft_memmove(((void *)0), ((void *)0), 5)));

	return 0;
}
