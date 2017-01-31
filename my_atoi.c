/*
** my_atoi.c for a in /home/soucan_d/Projets/CPE_2015_Pushswap/final
**
** Made by DImitri Soucanye de Landevoisin
** Login   <soucan_d@epitech.net>
**
** Started on  Thu Nov 19 16:40:03 2015 DImitri Soucanye de Landevoisin
** Last update Thu Feb 18 00:33:38 2016 Dimitri
*/

#include <stdio.h>
#include <stdlib.h>

int	count_nb_of_pipe(char **str, int line, int pipe)
{
  int	a;

  pipe = 0;
  a = -1;
  while (str[line][++a] != '\0')
    if (str[line][a] == '|')
      pipe = pipe + 1;
  return (pipe);
}

int	parseur_str(const char *str)
{
  int	a;

  a = 0;
  if (str[a] == 0)
    return (-1);
  while (str[a] != 0)
    {
      if (str[a] > 47 && str[a] < 58)
	a = a + 1;
      else
	return (-1);
    }
  return (0);
}

int	my_atoi(const char *str)
{
  int	i;
  int	j;
  int	idx;

  idx = 0;
  i = 0;
  j = 0;
  if (parseur_str(str) == -1)
    return (-1);
  if (str[0] == '-')
    {
      idx = 1;
      i = 1;
    }
  while (str[i] != 0)
    {
      if (str[i] >= '0' && str[i] <= '9')
	j = j * 10 + str[i] - '0';
      i = i + 1;
    }
  if (idx == 1)
    j = j * -1;
  return (j);
}
