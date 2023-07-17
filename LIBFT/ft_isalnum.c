/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubeyaz <mubeyaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 13:17:31 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/07/14 15:15:29 by mubeyaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int str)
{
	if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z') || (str >= '0'
			&& str <= '9'))
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	char	c;
	char	b;
	char	d;

	c = 'A';
	b = 'a';
	d = '!';
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", ft_isalnum(b));
	printf("%d", ft_isalnum(d));
}
*/