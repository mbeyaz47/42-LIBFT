/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubeyaz <mubeyaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:15:22 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/07/13 15:58:54 by mubeyaz          ###   ########.fr       */
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
int main()
{
	char dst[100];
	char src[] = "Hello World";
	size_t size = 10;
	printf("The length of the string is: %zu\n", ft_strlcpy(dst, src, size));
	printf("The string is: %s\n", dst);
	return 0;
}
*/