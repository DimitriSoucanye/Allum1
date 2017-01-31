/*
** display_map.c for a in /home/soucan_d/soucan_d/Projets/CPE_2015_Allum1
**
** Made by Dimitri
** Login   <soucan_d@epitech.net>
**
** Started on  Tue Feb  9 19:43:54 2016 Dimitri
** Last update Tue Feb 16 19:33:26 2016 Dimitri
*/

#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"

char	*display_map(int nb)
{
  char	*str;
  int	space_2;
  int	line;
  int	space;

  line = 0;
  if ((str = malloc(sizeof(char *))) == NULL)
    return (NULL);
  if (nb <= 7)
    {
      space = (7 - nb) / 2;
      space_2 = space;
      while (space-- != 0)
	str[line++] = ' ';
      while (nb-- != 0)
	str[line++] = '|';
      while (space_2-- != 0)
	str[line++] = ' ';
    }
  return (str);
}
