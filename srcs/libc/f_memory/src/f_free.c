/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_free.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qperez <qperez42@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/10/08 11:37:57 by qperez            #+#    #+#             */
/*   Updated: 2015/07/03 16:29:23 by qperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** <This file contains f_free function>
** Copyright (C) <2013>  Quentin Perez <qperez42@gmail.com>
** This file is part of 42-toolkit.
** 42-toolkit is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
** You should have received a copy of the GNU General Public License
** along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <f_secure/f_secure.h>
#include <f_memory/f_free.h>

void	uf_free_tab(void **tab)
{
	size_t	i;

	i = 0;
	while (tab[i] != NULL)
	{
		uf_free_s(&tab[i]);
		i = i + 1;
	}
	free(tab);
}

void	uf_free_tab_fail(void **tab, size_t current)
{
	size_t	i;

	i = 0;
	while (i < current)
	{
		uf_free_s(&tab[i]);
		i = i + 1;
	}
	free(tab);
}
