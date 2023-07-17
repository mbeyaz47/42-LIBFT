/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubeyaz <mubeyaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:58:21 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/07/13 12:45:39 by mubeyaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	dest = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!dest)
		return (NULL);
	while (s[i] != '\0')
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
// Örnek işlev: Küçük harfleri büyük harflere dönüştüren işlev
char	f(unsigned int index, char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	return (c);
}

int	main(void)
{
	char	*input;
	char	*result;

	input = "Muhammed Yusuf Beyaz";
	result = ft_strmapi(input, &f);
	if (result != NULL)
	{
		printf("Input: %s\n", input);
		printf("Result: %s\n", result);
		free(result);
	}
	return (0);
}
*/