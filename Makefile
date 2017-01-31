##
## Makefile for a in /home/soucan_d/soucan_d/Projets/CPE_2015_Allum1
## 
## Made by Dimitri
## Login   <soucan_d@epitech.net>
## 
## Started on  Wed Feb 10 13:17:15 2016 Dimitri
## Last update Tue Feb 16 15:45:58 2016 Dimitri
##

NAME		= allum1

SRCS		+= ai_turn.c \
		  board.c \
		  check_end.c \
		  check_matches.c \
		  display_map.c \
		  fonctions.c \
		  get_next_line.c \
		  my_atoi.c \
		  print_updated_board_game.c \
		  user_choice.c

OBJS		= $(SRCS:.c=.o)

CC		= gcc

ECHO		+= echo -e

RM		= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)
	@$(ECHO) '\033[01;34m---------------\033[01;34m->\033[01;32mAll compiled\033[01;34m<-\033[01;34m---------------\033[01;00m'

clean:
	$(RM) $(OBJS)
	@$(ECHO) '\033[01;31m-----------------\033[01;31m->\033[01;33mAll clean\033[01;31m<-\033[01;31m----------------\033[01;00m'

fclean: clean
	$(RM) $(NAME)
	@$(ECHO) '\033[01;36m---------------\033[01;36m->\033[01;36mBinary clean\033[01;36m<-\033[01;36m---------------\033[01;00m'

re: fclean all

.PHONY: all clean fclean re
