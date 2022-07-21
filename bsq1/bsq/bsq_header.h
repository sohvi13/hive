/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_header.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvuorenm <jvuorenm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:29:57 by jvuorenm          #+#    #+#             */
/*   Updated: 2022/07/19 21:30:34 by shaukkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef BSQ_HEADER_H
# define BSQ_HEADER_H
# include <stdlib.h>
# define FALSE 0
# define TRUE 1

typedef int				t_bool;
typedef struct s_vars	t_vars;
struct					s_vars
{
	int		size;
	char	*valid_c;
	char	**map;
	int		square_x;
	int		square_y;
	int		largest;
	int		**arr;
	int		err;
};

t_vars	read_stdin(t_vars vars);
int		read_multiple_maps(char **files);
void	print_error(char *name, char *file, int err);
char	**read_map(char *file, char **map);
void	ft_putnbr(int nb);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);
char	*ft_strcpy(char *src, char *dst);
char	*ft_fgets(char str[], int bytes, int stream);
char	**allocate_memory(char **map, int size);
t_vars	remove_first_line(t_vars vars);
void	print_map(t_vars vars);
void	print_ints(t_vars vars);
t_vars	get_size(t_vars vars, char *map);
int		validate(char **map);
int		ft_atoi(char *str);
char	*ft_charcat(char src, char *dst);
char	*get_valid_chars(char *map);
t_vars	find_largest_square(t_vars vars);
t_bool	square_on_top(t_vars vars, int x, int y);
t_bool	empty(t_vars vars, int x, int y);
t_bool	bottom_right_empty(t_vars vars, int x, int y);
t_bool	below_empty(t_vars vars, int x, int y);
t_bool	left_empty(t_vars vars, int x, int y);
t_bool	top_left_empty(t_vars vars, int x, int y);
t_bool	top_empty(t_vars vars, int x, int y);
t_vars	mark_square(t_vars vars, int x, int y);
t_bool	is_valid(t_vars vars, int x, int y);
t_vars	allocate_int_arr(t_vars vars);
int		min_empties_around(int **arr, int x, int y);
int		min(int a, int b);
t_vars	init_zero(t_vars vars);
int		draw_square(t_vars vars);
int		validate_map(t_vars vars);
t_bool	end_in_linebreak(t_vars vars, int len);
t_bool	only_valid_chars(t_vars vars, int row);
t_bool	row_valid(t_vars vars);
t_bool	size_valid(t_vars vars);
t_vars	init_map(t_vars vars);
void	free_memory(t_vars vars);
t_vars	is_map_set(t_vars vars);
t_vars	init_vars(t_vars vars);
t_vars	create_map_from_stdin(t_vars vars);
t_vars	setup_map(t_vars vars);
int		handle_stdin(t_vars vars);
int		handle_files(t_vars vars, int map_count, char **argv);
#endif
