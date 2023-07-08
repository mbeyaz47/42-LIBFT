/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubeyaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:33:10 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/07/07 15:33:11 by mubeyaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;
	size_t	value;

	if (size == 0)
		return (ft_strlen(src));
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (size < dlen)
		value = slen + size;
	else
		value = dlen + slen;
	i = 0;
	while (src[i] && (dlen + i) < size - 1)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (value);
}

/*
int	main(void)
{
	char destination[100] = "Hello, yusuf ";
	char source[] = " Muhammed World!";

	size_t resultLen = ft_strlcat(destination, source, sizeof(destination));

	printf("Birleştirilen dizenin uzunluğu: %zu\n", resultLen);
	printf("Hedef dizi: %s\n", destination);

	return (0);
}
*/