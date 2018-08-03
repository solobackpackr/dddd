/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyeon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 14:38:23 by jbyeon            #+#    #+#             */
/*   Updated: 2018/08/03 14:42:11 by jbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

#include <stdio.h>
int	main(void)
{
	char srt[] = "Hello";
	
	printf("%d\n", ft_strlen(srt));
	return (0);
}
