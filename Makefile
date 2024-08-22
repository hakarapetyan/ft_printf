NAME = libftprintf.a

CC = cc

FLAGS = -Wall -Wextra -Werror

SRC = ft_prchar.c\
ft_prdec.c\
ft_print.c\
ft_printf.c\
ft_prlower_hex.c\
ft_prupper_hex.c\
ft_prstr.c\
ft_prunsigned.c\
ft_prvoid_hex.c

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	ar -rc $(NAME) $(OBJS)

%.o:%.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:all clean fclean re