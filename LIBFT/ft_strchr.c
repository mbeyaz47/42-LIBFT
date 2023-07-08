/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubeyaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:53:11 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/07/05 15:55:21 by mubeyaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

/*
int	main(void)
{
	const char	*str;
	char		*result;

	str = "Hllo, Worldfje!";
	result = ft_strchr(str, 'e');
	if (result != NULL)
		printf("Found at index: %ld\n", result - str);
	else
		printf("Character not found\n");
	return (0);
}
*/