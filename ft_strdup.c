/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knamethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 15:18:25 by knamethe          #+#    #+#             */
/*   Updated: 2018/06/11 09:09:43 by knamethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dst;

	i = ft_strlen(s1);
	while (s1[i])
		i++;
	dst = (char*)malloc(sizeof(*dst) * (i + 1));
	if (dst == NULL)
		return (NULL);
	while (i >= 0)
	{
		dst[i] = s1[i];
		i--;
	}
	dst[i] = '\0';
	return (dst);
}
