/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_init2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 21:07:11 by asalniko          #+#    #+#             */
/*   Updated: 2026/04/11 21:07:13 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"
#include "cub3d.h"
#include "mlx.h"

void	move_player(t_game *game, double move)
{
	int	new_x;
	int	new_y;

	new_x = (int)(game->player.x + game->player.dir_x * move);
	new_y = (int)(game->player.y + game->player.dir_y * move);
	if (game->map.grid[(int)game->player.y][new_x] != '1')
		game->player.x += game->player.dir_x * move;
	if (game->map.grid[new_y][(int)game->player.x] != '1')
		game->player.y += game->player.dir_y * move;
}

void	strafe_player(t_game *game, double move)
{
	int	new_x;
	int	new_y;

	new_x = (int)(game->player.x + game->player.plane_x * move);
	new_y = (int)(game->player.y + game->player.plane_y * move);
	if (game->map.grid[(int)game->player.y][new_x] != '1')
		game->player.x += game->player.plane_x * move;
	if (game->map.grid[new_y][(int)game->player.x] != '1')
		game->player.y += game->player.plane_y * move;
}

