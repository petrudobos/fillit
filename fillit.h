/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoporan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 09:40:18 by dsoporan          #+#    #+#             */
/*   Updated: 2017/01/05 17:07:10 by rchiorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# include "libft/libft.h"

void	error(void);
int		count_tetriminos(char *str);
int		check_count(char *s, int i, int hash, int dot);
int		check_pieces(char *str);
int		resolve(char **tetris, char **map, int i);
char	**fix_tetris(char **square, char *str, int i, int j);
char	**get_out(char **square, char *str, int i, int j);
char	**new_square(int size);
void	fillit(char **matrix, int nb);
char	**get_in_matrix(char *array, int count, int i, int j);
void	convert_hash(char **tetris, int i, int j);
int		count_nr(char **str);
int		count_dots(char *str);
void	free_square(char **square);
void	aff_matrix(char **matrix);
int		validate_tetris(char **tetris, int i, int j);
void	validate(char **tetris, int i, int j, int hash);
int		check_map(char **square, char *str, int i, int j);

#endif
