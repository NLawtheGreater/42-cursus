/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaw <nlaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 22:59:11 by tsomsa            #+#    #+#             */
/*   Updated: 2023/02/14 17:25:13 by nlaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	render_player(t_data *data)
{
	t_sprt	p;

	p = data->player;
	if (p.act == ACT_HURTING)
		player_hurting(data);
	else if (p.act == ACT_WALK)
	{
		player_moving(data);
		player_walking(data);
	}
	else if (p.act == ACT_INTERACT)
		player_interacting(data);
	else if (p.act == ACT_STAND)
		player_standing(data);
	else if (p.act == ACT_COLLECTED)
		player_collecting(data);
	else
		player_switch_acting(data);
	mlx_put_image_to_window(data->mlx, data->win,
		data->player.img.ptr, data->player.v.x, data->player.v.y);
}

void	check_player(t_data *data)
{
	t_sprt	p;
	t_sprt	*e;

	p = data->player;
	if (p.act == ACT_SLEEP)
		return ;
	e = data->enemies;
	while (e)
	{
		if (is_ovelap_tile(e->v, p.v, 0, 0))
		{
			if (p.act != ACT_HURTING && p.act != ACT_FALLEN)
				player_hurting(data);
		}
		e = e->next;
	}
}

void	check_object_player(t_data *data, t_tile t)
{
	t_sprt	*obj;

	obj = data->objs;
	while (obj)
	{
		if (obj->v.x == t.v.x && obj->v.y == t.v.y && t.type == 'C')
		{
			if (obj->img.ptr)
			{
				mlx_destroy_image(data->mlx, obj->img.ptr);
				obj->img.ptr = NULL;
				data->player.act = ACT_COLLECTED;
				data->player.item++;
			}
			return ;
		}
		obj = obj->next;
	}
}
