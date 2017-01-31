/*
** check_end.c for a in /home/soucan_d/soucan_d/Projets/CPE_2015_Allum1
**
** Made by Dimitri
** Login   <soucan_d@epitech.net>
**
** Started on  Tue Feb  9 19:48:04 2016 Dimitri
** Last update Wed Feb 24 18:31:24 2016 Dimitri
*/

int	end_of_the_game(int turn)
{
  if (turn == 2)
    my_putstr("I lost.. snif.. but I'll get you next time!!\n");
  else
    my_putstr("You lost, too bad..\n");
  return (0);
}

int	check_end2(char **str)
{
  int	line;
  int	a;

  line = 1;
  a = 0;
  while (line != 5)
    {
      while (a != 7)
	{
	  if (str[line][a] == '|')
	    return (1);
	  else
	    a = a + 1;
	}
      line = line + 1;
      a = 0;
    }
  return (0);
}
