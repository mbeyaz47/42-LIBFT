/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubeyaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:52:43 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/07/10 14:52:46 by mubeyaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	rule;
	char	*array;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	rule = ft_strlen(s + start);
	if (rule < len)
		len = rule;
	array = malloc(len + 1);
	if (!array)
		return (NULL);
	ft_strlcpy(array, s + start, len + 1);
	return (array);
}

/*
int	main(void)
{
	const char	*s;
	char		*alt_dize;

	s = "Merhaba, dünya!";
	alt_dize = ft_substr(s, 3, 20);
	if (alt_dize == NULL)
	{
		printf("Alt dize oluşturulamadı.\n");
		return (1);
	}
	printf("Oluşturulan alt dize: %s\n", alt_dize);
	free(alt_dize); // Bellek serbest bırakılır.
	return (0);
}
*/