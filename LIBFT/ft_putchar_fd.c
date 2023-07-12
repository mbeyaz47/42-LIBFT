/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubeyaz <mubeyaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:51:21 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/07/12 18:03:54 by mubeyaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putchar_fd(char c, int fd)
{
    write (fd, &c, 1);
}

/*
int main()
{
	char c = 'A';
	int output_fd = 1;  // stdout dosya tanıtıcısı

	ft_putchar_fd(c, output_fd);

	return 0;
}
*/