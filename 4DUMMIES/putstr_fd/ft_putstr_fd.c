/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <gmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 17:42:34 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/18 17:51:48 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int a;

	a = 0;
	if (s)
	{
		while (s[a] != '\0')
		{
			write(fd, &s[a], 1);
			a++;
		}
	}
}
