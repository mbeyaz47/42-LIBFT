/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubeyaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:15:22 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/07/07 15:15:26 by mubeyaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	size2;

	i = 0;
	size2 = ft_strlen(src);
	if (size != 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (size2);
}

/*
int	main(void)
{
	char	source[20];
	char	destination[20];
	size_t	copiedLen;

	source[src] = "Merhaba, Dünya!";
	copiedLen = ft_strlcpy(destination, source, sizeof(destination));
	printf("Kopyalanan dizinin uzunluğu: %zu\n", copiedLen);
	printf("Hedef dizi: %s\n", destination);
	return (0);
}
*/