/*
** get_next_line.c for a in /home/soucan_d/soucan_d/test/CPE_2015_getnextline
**
** Made by Dimitri
** Login   <soucan_d@epitech.net>
**
** Started on  Mon Jan 12 17:07:38 2016 Dimitri
** Last update Mon Jan 18 21:52:06 2016 Dimitri
*/

#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"

char		*my_ralloc(char *imput, int b)
{
  int		a;
  char		*line;

  a = 0;
  if (b == 0 && ((imput = malloc(READ_SIZE + 1)) == NULL))
    return (NULL);
  if (b == 0)
    return (imput);
  if ((line = malloc(b + READ_SIZE + 1)) == NULL)
    return (NULL);
  while (a <= b)
    {
      line[a] = imput[a];
      a = a + 1;
    }
  line[a] = '\0';
  free(imput);
  return (line);
}

char		*check_end(char *imput, int b)
{
  static int	rest;

  if (b == 0)
    return (NULL);
  if (rest == 0)
    {
      rest = 1;
      return (imput);
    }
  else
    return (NULL);
}

char		*get_next_line(const int fd)
{
  static int	a;
  static char	buffer[READ_SIZE];
  static int	b;
  static int	end;
  static char	*imput;

  if (a == '\0' && (end = read(fd, buffer, READ_SIZE)) < 1)
    return (check_end(imput, b));
  if ((imput = my_ralloc(imput, b)) == NULL)
    return (NULL);
  while (a < end)
    {
      if (buffer[a] == '\n')
	{
	  a = a + 1;
	  imput[b] = '\0';
	  b = 0;
	  return (imput);
	}
      imput[b] = buffer[a];
      a = a + 1;
      b = b + 1;
    }
  a = 0;
  get_next_line(fd);
}
