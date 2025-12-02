/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:52:10 by rayan             #+#    #+#             */
/*   Updated: 2025/11/11 19:18:17 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief 
 * 
 * @param dest 
 * @param src 
 * @param len 
 * @return void* 
 */
void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char	*dptr;
	unsigned char	*sptr;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	dptr = (unsigned char *)dest;
	sptr = (unsigned char *)src;
	i = 0;
	while (i < len)
	{
		dptr[i] = sptr[i];
		i++;
	}
	return (dest);
}
