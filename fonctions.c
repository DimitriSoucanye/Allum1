/*
** fonctions.c for a in /home/soucan_d/soucan_d/Projets/CPE_2015_Allum1
**
** Made by Dimitri
** Login   <soucan_d@epitech.net>
**
** Started on  Mon Feb  8 12:17:13 2016 Dimitri
** Last update Thu Feb 18 18:40:54 2016 Dimitri
*/

void	my_putchar(char c)
{
  write (1, &c, 1);
}

void	my_putstr(char *str)
{
  int	a;

  a = 0;
  while (str[a] != 0)
    {
      my_putchar(str[a]);
      a = a + 1;
    }
}

int	my_strlen(char *str)
{
  int	a;

  a = 0;
  while (str[a] != 0)
    a = a + 1;
  return (a);
}

void	display_status_error(char **str)
{
  my_putstr("Error: invalid input (positive number expected)\n");
  get_line(str);
}
