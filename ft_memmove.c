/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:09:03 by rayan             #+#    #+#             */
/*   Updated: 2025/11/11 19:18:20 by rayan            ###   ########.fr       */
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
void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*dptr;
	unsigned char	*sptr;

	if (!dest && !src)
		return (0);
	dptr = (unsigned char *)dest;
	sptr = (unsigned char *)src;
	if (dptr == sptr || len == 0)
		return (dest);
	if (dptr > sptr)
	{
		while (len > 0)
		{
			len--;
			dptr[len] = sptr[len];
		}
	}
	if (dptr < sptr)
	{
		while (len--)
			*dptr++ = *sptr++;
	}
	return (dest);
}
