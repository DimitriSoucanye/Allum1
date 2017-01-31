/*
** get_next_line.h for a in /home/soucan_d/soucan_d/test/CPE_2015_getnextline
**
** Made by Dimitri
** Login   <soucan_d@epitech.net>
**
** Started on  Mon Jan 18 17:11:32 2016 Dimitri
** Last update Tue Feb 16 21:31:19 2016 Dimitri
*/

#ifndef READ_SIZE
# define READ_SIZE (14)

char	*my_ralloc(char *imput, int b);
char	*check_end(char *imput, int b);
char	*get_next_line(const int fd);
char	*display_map(int nb);

#endif /*!READ_SIZE*/
