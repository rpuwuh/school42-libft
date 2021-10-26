/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:47:38 by bpoetess          #+#    #+#             */
/*   Updated: 2021/10/07 16:47:40 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int	c)
{
	if ((c < 32) || c >= 127)
		return (0);
	return (c);
}