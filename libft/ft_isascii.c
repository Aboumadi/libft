/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:11:18 by aboumadi          #+#    #+#             */
/*   Updated: 2021/11/07 13:24:03 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_isascii(int n)
{
	if (n >= 0 && n <= 127)
		return (1);
	return (0);
}
