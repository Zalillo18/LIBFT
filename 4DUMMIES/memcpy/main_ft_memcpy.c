/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 14:35:40 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/11 16:57:55 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libft.h>
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char *src2;
	unsigned char *dst2;

	src2 = (const unsigned char*)src;
	dst2 = (unsigned char*)dst;
	if ((dst == '\0' && src == '\0') || !n)
		return (dst);
	while (n > 0)
	{
		*dst2 = *src2;
		dst2++;
		src2++;
		n--;
	}
	return (dst);
}

int main()
{
	char dst[] = "Hola";
	char src[] = "paco";
	size_t n = 2;
	printf("%s\n", memcpy(dst, src, n));
	printf("%s\n", ft_memcpy(dst, src, n));
}
