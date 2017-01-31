/*
** user_choice.c for a in /home/soucan_d/soucan_d/Projets/CPE_2015_Allum1
**
** Made by Dimitri
** Login   <soucan_d@epitech.net>
**
** Started on  Tue Feb  9 19:45:08 2016 Dimitri
** Last update Fri Feb 26 18:29:50 2016 Dimitri
*/

#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"

int	get_line(char **str)
{
  int	line;
  int	pipe;
  char	*tmp;

  my_putstr("Line: ");
  if ((tmp = get_next_line(0)) == NULL)
    return (0);
  else if ((line = my_atoi(tmp)) == -1)
    display_status_error(str);
  else if (line > 4 || line == 0)
    {
      my_putstr("Error: this line is out of range\n");
      get_line(str);
    }
  else if (line < 0)
    display_status_error(str);
  else
    return (line);
}

void	display_ccl(int line, int matches, int turn)
{
  if (turn != 2)
    my_putstr("Player removed ");
  else
    my_putstr("AI removed ");
  my_putchar(matches + 48);
  my_putstr(" match(es) from line ");
  my_putchar(line + 48);
}

void	matches_0(int line, char **str)
{
  if (line == 0)
    my_putstr("Error: you have to remove at least one match\n");
  else if (line < 0 || line == 42)
    my_putstr("Error: invalid input (positive number expected)");
  if ((line = get_line(str)) != 0)
    get_matches(line, str);
}

void	matches_null(int matches, char **str)
{
  int	line;

  my_putstr("Error: not enough matches on this line\n");
  if ((line = get_line(str)) != 0)
    get_matches(line, str);
}

int	get_matches(int line, char **str, int turn)
{
  int	matches;
  int	pipe;

  if (line == 0 && turn == 2)
    {
      line = rand_line(str);
      pipe = count_nb_of_pipe(str, line, pipe);
      matches = get_ai_rand_matches(pipe);
    }
  else
    {
      if ((matches = matches_norme(matches, str)) == -1)
	return (0);
      else if (matches == 42)
	return (0);
    }
  check_matches(matches,  turn, line, str);
}
