/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_funcs_tools.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabbah <nsabbah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 16:36:36 by nsabbah           #+#    #+#             */
/*   Updated: 2017/03/27 16:38:28 by nsabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../srcs/vm.h"

int		ft_is_reg(int r1, int r2, int r3)
{
	if (r1 < 0 || r1 > REG_SIZE ||
			r2 < 0 || r2 > REG_SIZE ||
				r3 < 0 || r3 > REG_SIZE)
		return (0);
	return (1);
}