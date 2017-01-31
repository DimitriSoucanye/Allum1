/*
** printf_board_game_in_a_pretty_fram.c for a in /home/soucan_d/soucan_d/Bootstrap/CPE_2015_allum1_bootstrap
**
** Made by Dimitri
** Login   <soucan_d@epitech.net>
**
** Started on  Tue Feb  9 11:12:35 2016 Dimitri
** Last update Fri Feb 26 18:23:59 2016 Dimitri
*/

#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"

int	matches_norme(int matches, char **str)
{
  int	line;
  char	*tmp;

  my_putstr("Matches: ");
  if ((tmp = get_next_line(0)) == NULL)
    return (-1);
  else if ((matches = my_atoi(tmp)) == -1)
    {
      my_putstr("Error: invalid input (positive number expected)\n");
      if ((line = get_line(str)) != 0)
	get_matches(line, str);
      return (42);
    }
  else
    return (matches);
}

int	nb_of_space(int line)
{
  int	a;

  if (line == 1)
    return (3);
  else if (line == 2)
    return (2);
  else if (line == 3)
    return (1);
  else if (line == 4)
    return (0);
}

char	**print_updated_board_game(int line, int matches, char **str, int d)
{
  int	a;
  int	ligne;
  int	new_pipe;
  int	space;

  ligne = 0;
  a = 0;
  my_putchar(10);
  while (str[++ligne] != 0)
    {
      if (ligne == line)
	{
	  new_pipe = d - matches;
	  space = nb_of_space(line);
	  while (space-- != 0)
	    str[line][a++] = ' ';
	  while (new_pipe-- != 0)
	    str[line][a++] = '|';
	  while (str[line][a] != 0)
	    str[line][a++] = ' ';
	  printf_board_game_in_a_pretty_fram(str[line]);
	}
      else
	printf_board_game_in_a_pretty_fram(str[ligne]);
    }
}

int	main2(char **map, int a)
{
  int	choice_line;

  while (42)
    {
      if ((make_human_and_ai_play_a_round(a)) != 2)
	{
	  if ((choice_line = get_line(map)) == 0
	      || get_matches(choice_line, map, 0) == 0)
	    return (0);
	}
      else
	{
	  choice_line = 0;
	  if (get_matches(choice_line, map, 2) == 0)
	    return (0);
	}
    }
}

int	main()
{
  char	**map;
  int	a;
  int	line;
  int	choice_line;

  choice_line = 0;
  line = 1;
  a = 1;
  if ((map = malloc(sizeof(char *) * 7)) == 0)
    return (0);
  while (a <= 7)
    {
      map[line] = display_map(a);
      printf_board_game_in_a_pretty_fram(map[line]);
      line = line + 1;
      a = a + 2;
    }
  my_putchar(10);
  main2(map, 0);
  free(map);
}
