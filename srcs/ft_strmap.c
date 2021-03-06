/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyun <jhyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 20:12:28 by jhyun             #+#    #+#             */
/*   Updated: 2013/11/20 20:12:29 by jhyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*fresh;
	int		i;

	i = 0;
	fresh = NULL;
	if (s && f)
	{
		fresh = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
		while (*s != '\0')
		{
			fresh[i] = (*f)(*s);
			i++;
			s++;
		}
	}
	return (fresh);
}
