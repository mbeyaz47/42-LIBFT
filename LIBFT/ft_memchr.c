/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubeyaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:49:58 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/07/08 12:23:05 by mubeyaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	size_t				i;

	p = s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
		{
			return ((void *)(p + i));
		}
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	const char	*str;
	char		*s;

	str = "Hello, World!";
	s = ft_memchr(str, 'l', 13);
	if (s != NULL)
	{
		printf("Karakter bulundu: %c\n", *s);
	}
	else
	{
		printf("Karakter bulunamadi.\n");
	}
	return (0);
}

*/
