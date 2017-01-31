/*
** board.c for a in /home/soucan_d/soucan_d/Projets/CPE_2015_Allum1
**
** Made by Dimitri
** Login   <soucan_d@epitech.net>
**
** Started on  Tue Feb  9 19:44:39 2016 Dimitri
** Last update Wed Feb 10 11:31:28 2016 Dimitri
*/

void	printf_board_game_in_a_pretty_fram(char *str)
{
  static int	a = 1;

  if (a == 1)
    my_putstr("*********\n");
  my_putchar('*');
  my_putstr(str);
  my_putchar('*');
  my_putchar(10);
  if (a == 7)
    {
      my_putstr("*********\n");
      a = 1;
    }
  else
    a = a + 2;
}
