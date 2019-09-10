/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 16:57:15 by rgero             #+#    #+#             */
/*   Updated: 2019/09/10 19:14:05 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

void	ft_putchar(char c);
void    ft_putstr(char *str);
void	ft_putnbr(int n);

void    *ft_memset(void *b, int c, size_t len);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void    *ft_memccpy(void *restrict dst, const void *restrict src, int c, \
		        size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *s);
char    *ft_strdup(const char *s1);
char    *ft_strcpy(char *dst, const char *src);
char    *ft_strncpy(char * dst, const char * src, size_t len);
char    *ft_strcat(char *restrict s1, const char *restrict s2);
char    *ft_strncat(char *restrict s1, const char *restrict s2, size_t n);
size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t size);

#endif
