/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubeyaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 13:45:27 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/07/07 13:45:29 by mubeyaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	while (*haystack && len >= needle_len)
	{
		if (*haystack == *needle && strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (0);
}

/*
int	main(void)
{
	const char *haystack = "Hello, world!";
	const char *needle = "world!";
	size_t len = ft_strlen(haystack);

	char *result = ft_strnstr(haystack, needle, len);

	if (result != NULL)
	{
		printf("Substring found at index: %ld\n", result - haystack);
		printf("Substring: %s\n", result);
	}
	else
	{
		printf("Substring not found.\n");
	}

	return (0);
}
*/