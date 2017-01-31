/*
** ai_turn.c for a in /home/soucan_d/soucan_d/Projets/CPE_2015_Allum1
**
** Made by Dimitri
** Login   <soucan_d@epitech.net>
**
** Started on  Wed Feb 10 11:41:07 2016 Dimitri
** Last update Wed Feb 17 03:53:23 2016 Dimitri
*/

#include <time.h>
#include <stdlib.h>

int	make_human_and_ai_play_a_round(int a)
{
  static int	player_turn;

  if (player_turn == 0)
    {
      player_turn++;
      my_putstr("Your turn:\n");
      return (1);
    }
  else
    {
      my_putstr("AI's turn...\n");
      player_turn--;
      return (2);
    }
}

int	get_ai_rand_matches(int pipe)
{
  int	nb;

  srand(time(NULL));
  nb = (rand() % pipe) + 1;
  return (nb);
}

int	rand_line(char **str)
{
  int	line;
  int	a;

  line = 1;
  a = 0;
  while (str[line][a] != 0)
    {
      if (str[line][a] == '|')
	return (line);
      else if (a == 6)
	{
	  a = 0;
	  line = line + 1;
	}
      else
	a = a + 1;
    }
  return (0);
}
