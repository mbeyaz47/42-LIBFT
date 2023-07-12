/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubeyaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:27:40 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/07/12 15:27:41 by mubeyaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

/*
// Örnek işlev: Elemanları büyük harfe dönüştüren işlev
void convertToUpper(unsigned int index, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 'a' + 'A';
}

int main()
{
	char str[] = "hello world";
	printf("Before: %s\n", str);
	
	ft_striteri(str, &convertToUpper);
	
	printf("After: %s\n", str);
	
	return 0;
}
*/