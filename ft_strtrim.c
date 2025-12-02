/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:31:30 by rayan             #+#    #+#             */
/*   Updated: 2025/11/11 19:24:39 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief 
 * 
 * @param c 
 * @param set 
 * @return int 
 */
int	ft_inset(char c, char const	*set)
{
	int	n;

	n = 0;
	while (set[n])
	{
		if (set[n] == c)
			return (1);
		n++;
	}
	return (0);
}

/**
 * @brief 
 * 
 * @param s1 
 * @param set 
 * @return char* 
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	int		s1_len;
	int		start;
	int		end;
	char	*str;

	s1_len = 0;
	while (s1[s1_len])
		s1_len++;
	start = 0;
	while (s1[start] && ft_inset(s1[start], set) == 1)
		start++;
	end = s1_len;
	while (end > start && ft_inset(s1[end -1], set) == 1)
		end--;
	str = ft_substr(s1, start, end - start);
	return (str);
}
