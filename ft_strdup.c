/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:22:11 by rayan             #+#    #+#             */
/*   Updated: 2025/12/02 16:09:06 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief - Allocates new memory and creates a duplicate of the given string.
 * 
 * @param str - The string to duplicate.
 * @return char* - A pointer to the newly allocated copy of the string,
 * 					or NULL if memory allocation fails.
 */
char	*ft_strdup(const char *str)
{
	size_t	len;
	size_t	i;
	char	*ptr;

	len = ft_strlen(str);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
