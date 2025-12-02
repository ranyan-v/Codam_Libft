/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:04:53 by rayan             #+#    #+#             */
/*   Updated: 2025/11/11 19:21:36 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief 
 * 
 * @param ptr 
 * @param c 
 * @return char* 
 */
char	*ft_strchr(const char *ptr, int c)
{
	int	i;

	i = 0;
	while (ptr[i] && ptr[i] != (char) c)
		i++;
	if (ptr[i] == (char) c)
		return ((char *)&ptr[i]);
	return (NULL);
}
