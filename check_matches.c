/*
** check_matches.c for a in /home/soucan_d/soucan_d/Projets/CPE_2015_Allum1
**
** Made by Dimitri
** Login   <soucan_d@epitech.net>
**
** Started on  Tue Feb 16 15:45:11 2016 Dimitri
** Last update Tue Feb 16 15:47:14 2016 Dimitri
*/

int	check_matches(int matches, int turn, int line, char **str)
{
  int	pipe;

  pipe = count_nb_of_pipe(str, line, pipe);
  if (matches <= 0)
    matches_0(matches, str);
  else if (matches <= pipe)
    {
      display_ccl(line, matches, turn);
      print_updated_board_game(line, matches, str, pipe);
      if (check_end2(str) == 0)
	return (end_of_the_game(turn));
      else
	my_putchar(10);
    }
  else
    matches_null(matches, str);
}
