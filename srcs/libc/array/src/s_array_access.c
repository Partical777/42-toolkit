/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_array_access.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qperez <qperez42@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/10/03 13:59:04 by qperez            #+#    #+#             */
/*   Updated: 2015/07/04 20:44:01 by qperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** <This file contains s_array_access function>
** < data, at >
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

#include <array/s_array.h>
#include <stdint.h>
#include <f_error/m_error.h>

void	*mf_array_data(t_array *v_this)
{
	return (v_this->v_data);
}

void	*mf_array_at(t_array *v_this, size_t index)
{
	if (index >= v_this->v_size)
		return ((void *)M_ERROR((size_t)0,"Out of range"));
	return ((void *)((uintptr_t)v_this->v_data + index * v_this->v_type_size));
}
